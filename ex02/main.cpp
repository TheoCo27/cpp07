/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:48:31 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 15:36:42 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array <int> tab;
    Array <int>tab2(10);
    for(int i = 0; i < 10; i++)
        tab2[i] = i;
    std::cout << "Tab2 of size ten created\n";
    for(int i = 0; i < 10; i++)
        std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;
    std::cout << "\n\n";
    Array <int> tab3(tab2);
    std::cout << "tab3 created via copy of tab2\n";
    for(int i = 0; i < 10; i++)
        std::cout << "tab3[" << i << "] = " << tab3[i] << std::endl;
    for(int i = 0; i < 10; i++)
        tab3[i] = i * 10;
    std::cout << "\n\n";
    tab2 = tab3;
    std::cout << "tab3 after * 10 on all values\n";
    for(size_t i = 0; i < tab3.size(); i++)
        std::cout << "tab3[" << i << "] = " << tab3[i] << std::endl;
    std::cout << "tab2 after tab2 = tab3\n";
    for(int i = 0; i < 10; i++)
        std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;
}