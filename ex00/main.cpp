/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:32:33 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 13:28:31 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
	int arr[] = {0, 1, 2, 3};
    std::vector<int> prueba(arr, arr + sizeof(arr) / sizeof(int));

    std::vector<int>::iterator number = easyfind(prueba, 0);
	if (number == prueba.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Found" << std::endl;
	std::cout << *number << std::endl;
	return (0);
}