/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:00:56 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 00:11:20 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
    int a = 1;
    int b = 2;

    std::cout << "min between " << a << " and " << b << " is " << min(a, b) << std::endl;
    std::cout << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "after swap " << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;

    double y = 42.0;
    double x = 44.0;

    std::cout << "min between " << y << " and " << x << " is " << min(y, x) << std::endl;
    std::cout << "max between " << y << " and " << x << " is " << max(y, x) << std::endl;
    swap(y, x);
    std::cout << "after swap " << "max between " << y << " and " << x << " is " << max(y, x) << std::endl;


}

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