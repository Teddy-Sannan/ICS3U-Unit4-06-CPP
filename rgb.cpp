// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program shows all rgb values
// with user input

#include <iostream>
#include <cstdlib>
#include <string>


int main() {
    int red = 0;
    int green = 0;
    int blue = 0;


    // process
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                // output
                std::cout << "RGB(" << red << "," << green << "," << blue
                          << ")" << std::endl;
            }
        }
    }
}
