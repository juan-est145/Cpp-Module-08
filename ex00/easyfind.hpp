#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &hay, int needle);

#include "easyfind.tpp"
#endif