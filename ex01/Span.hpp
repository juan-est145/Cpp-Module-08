#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>
#include <climits>

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _span;

public:
	Span(void);
	Span(unsigned int maxSize);
	Span(const Span &copy);
	Span &operator=(const Span &assign);
	unsigned int getMaxSize(void) const;
	unsigned int getSize(void) const;
	void addNumber(int n);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int longestSpan(void) const;
	unsigned int shortestSpan(void) const;
	~Span(void);

	class NoSpan : std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Can't obtain a span");
		}
	};
	class MaxSize : std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Max size reached");
		}
	};
};

#endif