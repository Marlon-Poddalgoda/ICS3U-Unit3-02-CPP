// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program is a guessing game

#include <iostream>

int main() {
    // this function compares a user input to a constant

    std::cout << "Today we will play a guessing game." << std::endl;

    // variable declarations
    const int CORRECT_GUESS = 5;
    int user_guess;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // process if correct
    if (user_guess == CORRECT_GUESS) {
        // output
        std::cout << "Correct! " << CORRECT_GUESS
                  << " was the right answer.";
    }

    // process if incorrect
    if (user_guess != CORRECT_GUESS) {
        // output
        std::cout << "Incorrect, try again!";
    }
}
