/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:18:22 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/22 16:35:46 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void mult(int v)
{
	std::cout << 3 * v << std::endl;
}

void mult_affect(int& v)
{
	v *= 3;
}

int main(void)
{
	int array[3] = {4, 5, 3};
	
	iter(array, 3, mult);	
	iter(array, 3, mult_affect);
	for (int i = 0; i < 3; ++i)
		std::cout << array[i] << std::endl;	
	return (0);
}
