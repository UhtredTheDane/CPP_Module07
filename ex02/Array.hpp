/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:18:27 by agengemb          #+#    #+#             */
/*   Updated: 2023/12/24 16:47:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const& toCopy);
		Array& operator=(Array<T> const& toAffect);
		T& operator[](int index);
		~Array(void);
		unsigned int size() const;

	private:
		T *ptr;
		unsigned int length;
};

#include "Array.tpp"

#endif
