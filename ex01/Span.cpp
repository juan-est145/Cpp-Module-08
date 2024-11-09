/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:10:15 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 14:17:53 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->_size = 0;
}

Span::Span(unsigned int size)
{
	this->_size = size;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &assign)
{
	if (this != &assign)
		this->_size = assign._size;
	return *this;
}

unsigned int Span::getSize(void) const
{
	return this->_size;
}

Span::~Span(void) {}