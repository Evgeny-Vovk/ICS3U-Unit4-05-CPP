// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-05.cpp File, learning continue statement in C++.

#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string timesToRepeat;
    std::string addNumber;
    float answer;
    float timesToRepeatAsFloat;
    float addNumberAsFloat;
    int timesToRepeatAsInt;
    int addNumberAsInt;
    int counter = 0;

    // input
    std::cout << "How many numbers do you want to add: ";
    std::cin >> timesToRepeat;

    // process and output
    std::cout << "\n";
    try {
        timesToRepeatAsInt = std::stoi(timesToRepeat);
        timesToRepeatAsFloat = std::stof(timesToRepeat);
        while (counter < timesToRepeatAsInt &&
            timesToRepeatAsInt == timesToRepeatAsFloat) {
            counter++;
            std::cout << "Enter a number to add: ";
            std::cin >> addNumber;
            addNumberAsInt = std::stoi(addNumber);
            addNumberAsFloat = std::stof(addNumber);
            if (addNumberAsFloat != addNumberAsInt) {
                break;
            } else if (addNumberAsInt < 0) {
                continue;
            }
            answer += addNumberAsInt;
        }
        if (timesToRepeatAsFloat != timesToRepeatAsInt
            || addNumberAsFloat != addNumberAsInt) {
            std::cout << "Input a whole number.";
        } else if (timesToRepeatAsInt < 0) {
            std::cout << "Input a positive number.";
        } else {
            std::cout << "Sum of all the positive numbers is " << answer;
        }
    } catch (std::invalid_argument) {
        std::cout << "\ninvalid input, "
                  << " the input does not fit the requirements.";
    }

    std::cout << "\n\n\nDone.\n";
}
