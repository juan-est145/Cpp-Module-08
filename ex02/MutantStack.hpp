#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(void);
	MutantStack(const MutantStack &copy);
	MutantStack &operator=(const MutantStack &assign);
	iterator begin(void);
	iterator end(void);
	~MutantStack(void);
};
#include "MutantStack.tpp"
#endif