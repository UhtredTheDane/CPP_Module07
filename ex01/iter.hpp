/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:18:28 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/22 16:12:23 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T, typename J>

void	iter(T* array_ptr, std::size_t length, J function)
{
	for (std::size_t i = 0; i < length; ++i)
		function(array_ptr[i]);
}
