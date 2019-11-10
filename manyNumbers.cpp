// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program prints all numbers form 1000 to 2000 in 5 numbers per line

#include <iostream>
#include <string>

main() {
    // This is adds only positive numbers

    // variables
    int number = 0;
    int keepUpper = 0;

    // process
    for (number = 1000; number < 2001; number++) {
        std::cout << number << " ";
        if (keepUpper % 5 == 4) {
            std::cout << "" << std::endl;
        }
        keepUpper = keepUpper + 1;
    }
}
