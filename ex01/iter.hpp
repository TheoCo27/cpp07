/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:25:35 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 00:31:29 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstddef>
#include <cstdlib>

template <typename T>
void iter(T* tab, size_t lenght, void (*f)(T&))
{
    for (size_t i = 0; i < lenght; i++)
        f(tab[i]);
}