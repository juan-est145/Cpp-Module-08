/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:07:33 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 16:29:41 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span test = Span(10);
	std::vector<int> fill;
	for (unsigned int i = 0; i < 10; i++)
		fill.push_back(i + 1);
	test.addRange(fill.begin(), fill.end());
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	Span negative = Span(10);
	std::vector<int> nFill;
	for (unsigned int i = 0; i < 10; i++)
		nFill.push_back(-(i + 1));
	negative.addRange(nFill.begin(), nFill.end());
	std::cout << negative.shortestSpan() << std::endl;
	std::cout << negative.longestSpan() << std::endl;
	return (0);
}