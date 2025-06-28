/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 00:32:26 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 00:36:34 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int &x) {
    std::cout << x << " ";
}

// Fonction pour incrémenter chaque élément du tableau d'entiers
void incrementInt(int &x) {
    ++x;
}

// Fonction pour tester `iter` avec un tableau de chaînes de caractères
void printString(std::string &str) {
    std::cout << str << " ";
}

// Fonction pour mettre en majuscule une chaîne de caractères
void toUpperCase(std::string &str) {
    for (int i = 0; str[i]; i++) {
        str[i] = std::toupper(str[i]);
    }
}

int main() {
    // Test avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    unsigned long intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "Tableau d'entiers avant incrémentation : ";
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    iter<int>(intArray, intArrayLength, incrementInt);

    std::cout << "Tableau d'entiers après incrémentation : ";
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    // Test avec un tableau de chaînes de caractères
    std::string strArray[] = {"hello", "world", "iter", "template"};
    unsigned long strArrayLength = sizeof(strArray) / sizeof(strArray[0]);
    
    std::cout << "Tableau de chaînes avant conversion en majuscules : ";
    iter(strArray, strArrayLength, printString);
    std::cout << std::endl;

    iter(strArray, strArrayLength, toUpperCase);

    std::cout << "Tableau de chaînes après conversion en majuscules : ";
    iter(strArray, strArrayLength, printString);
    std::cout << std::endl;

    return 0;
}