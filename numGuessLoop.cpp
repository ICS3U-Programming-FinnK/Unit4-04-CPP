// Created by : Finn Kitor
// Created on : November 15th, 2023
// this program generates a number loop between 0 - 9 and then it will loop through the numbers
// and it will use the break statement and try catch statement
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand(time(0));

    try {  // random numbers between 0 to 9
        int correct_number = rand() % 10;

        while (true) {
            try {
                int guess;
                std::cout << "Guess a number between 0 and 9: ";
                std::cin >> guess;
                // terminal will loop to keep asking the user to guess the number
                if (guess == correct_number) {
                    std::cout << "Congratulations! You guessed the correct number." << std::endl;
                    break;
                } else {
                    std::cout << "Try again!" << std::endl;
                }  // terminal will catch invalid inputs
            } catch (std::exception& e) {
                std::cout << "Invalid input. Please enter a number." << std::endl;
            }
        }
    } catch (std::exception& e) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
    }

    return 0;
}
