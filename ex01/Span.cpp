/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:10:15 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 16:25:24 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->_maxSize = 0;
}

Span::Span(unsigned int maxSize)
{
	this->_maxSize = maxSize;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		this->_maxSize = assign._maxSize;
		std::copy(assign._span.begin(), assign._span.end(), this->_span.begin());
	}
	return *this;
}

unsigned int Span::getMaxSize(void) const
{
	return this->_maxSize;
}

unsigned int Span::getSize(void) const
{
	return static_cast<unsigned int>(this->_span.size());
}

void Span::addNumber(int n)
{
	unsigned int currSize = static_cast<unsigned int>(this->_span.size());
	if (currSize == this->_maxSize)
		throw Span::MaxSize();
	this->_span.push_back(n);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->_span.size() > this->_maxSize)
		throw Span::MaxSize();
	this->_span.insert(this->_span.end(), begin, end);
}

unsigned int Span::longestSpan(void) const
{
	if (this->_span.size() < 2)
		throw Span::NoSpan();
	std::vector<int>::const_iterator max = std::max_element(this->_span.begin(), this->_span.end());
	std::vector<int>::const_iterator min = std::min_element(this->_span.begin(), this->_span.end());
	return (static_cast<unsigned int>(std::abs(*max - *min)));
}

unsigned int Span::shortestSpan(void) const
{
	unsigned int span = UINT_MAX;
	if (this->_span.size() < 2)
		throw Span::NoSpan();
	std::vector<int> copy = this->_span;
	std::sort(copy.begin(), copy.end());
	for (std::vector<int>::iterator it = copy.begin() + 1; it != copy.end(); it++)
	{
		unsigned int currSpan = static_cast<unsigned int>(std::abs(*it - *(it - 1)));
		if (currSpan < span)
			span = currSpan;
	}
	return (span);
}

Span::~Span(void) {}