/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:04:21 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/24 16:45:49 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const& min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T const& max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b);
}
