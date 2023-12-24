/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:18:28 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/24 17:28:03 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename J>
void	iter(T* array_ptr, std::size_t length, J function)
{
	for (std::size_t i = 0; i < length; ++i)
		function(array_ptr[i]);
}

template<typename T>
void multByThree(T& number)
{
	number *= 3;
}

template<typename T>
void divByThree(T& number)
{
	number /= 3;
}

#endif
