/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 23:57:35 by theog             #+#    #+#             */
/*   Updated: 2025/06/30 19:39:15 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T& a, T& b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T& min(T& a, T& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T& max(T& a, T& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
