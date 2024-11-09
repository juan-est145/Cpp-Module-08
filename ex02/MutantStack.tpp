/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:14:56 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 17:28:09 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	(void) copy;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	(void) assign;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}