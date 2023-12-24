/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:18:22 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/24 17:01:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void capitalize(std::string& str)
{
	for (unsigned int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}

int main(void)
{
	int array[3] = {4, 5, 3};
	iter(array, 3, multByThree<int>);
	for (int i = 0; i < 3; ++i)
		std::cout << array[i] << std::endl;	
	std::cout << std::endl;

	double array2[3] = {21, 13, 81.36};
	iter(array2, 3, divByThree<double>);
	for (int i = 0; i < 3; ++i)
		std::cout << array2[i] << std::endl;
	std::cout << std::endl;

	std::string array3[3] = {"coucou", "Comment Ca Va ?", "Au revoir"};
	iter(array3, 3, capitalize);
	for (int i = 0; i < 3; ++i)
		std::cout << array3[i] << std::endl;	
	return (0);
}
