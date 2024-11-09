#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(const MutantStack &copy);
	MutantStack &operator=(const MutantStack &assign);
	typedef typename std::stack<T>::container_type::iterator mIterator;
	mIterator begin(void);
	mIterator end(void);
	~MutantStack(void);

};
#include "MutantStack.tpp"
#endif