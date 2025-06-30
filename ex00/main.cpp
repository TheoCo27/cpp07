/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:00:56 by theog             #+#    #+#             */
/*   Updated: 2025/06/30 19:40:51 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
    // int a = 1;
    // int b = 2;

    // std::cout << "min between " << a << " and " << b << " is " << min(a, b) << std::endl;
    // std::cout << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;
    // swap(a, b);
    // std::cout << "after swap " << "max between " << a << " and " << b << " is " << max(a, b) << std::endl;

    // double y = 42.0;
    // double x = 44.0;

    // std::cout << "min between " << y << " and " << x << " is " << min(y, x) << std::endl;
    // std::cout << "max between " << y << " and " << x << " is " << max(y, x) << std::endl;
    // swap(y, x);
    // std::cout << "after swap " << "max between " << y << " and " << x << " is " << max(y, x) << std::endl;


}
