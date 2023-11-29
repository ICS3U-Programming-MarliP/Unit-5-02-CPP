// Copyright (c) 2023 Marli Peters All Rights Reserved
// Created by: Marli Peters
// Date: Nov. 24, 2023
// This program creates a function that asks user for the width and
// length of a triangle then calculates the area and displays it for them
// in the main function.
#include <iostream>

void triangleArea(std::string baseStr, std::string heightStr) {
    try {
        int baseInt = stoi(baseStr);
        int heightInt = stoi(heightStr);
        int area;

        // calculate area
        area = baseInt * heightInt / 2;

        // display area
        if (baseInt <= 0 || heightInt <= 0) {
            std::cout << "Please enter positive numbers" << std::endl;
        } else {
            std::cout << "The area of the triangle is "
            << area << " ^2." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter valid integers." << std::endl;
    }
}

int main() {
    // get base and height of triangle
    std::string baseStr;
    std::string heightStr;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> (baseStr);

    std::cout << "Enter the height of the triangle: ";
    std::cin >> (heightStr);

    // call triangle_area function
    triangleArea(baseStr, heightStr);

    return 0;
}
