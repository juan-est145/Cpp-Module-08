#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _span;

public:
	Span(void);
	Span(unsigned int size);
	Span(const Span &copy);
	Span &operator=(const Span &assign);
	unsigned int getSize(void) const;
	~Span(void);

	class NoSpan : std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Can't obtain a span");
		}
	};
};

#endif