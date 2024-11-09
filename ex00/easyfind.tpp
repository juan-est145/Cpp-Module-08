/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:32:55 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/09 13:15:20 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &hay, int needle)
{
	typename T::iterator it = std::find(hay.begin(), hay.end(), needle);

	if (it == hay.end())
		return (hay.end());
	return (it);
}