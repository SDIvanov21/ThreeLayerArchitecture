#include "PresentationLayer.h"

#include <iostream>

void PresentationLayer::Print(const std::string& message) {
    std::cout << message;
}

void PresentationLayer::DisplayMenu() {
    std::cout << "1. Sign Up\n";
    std::cout << "2. Exit\n";
}

int PresentationLayer::GetUserChoice(const std::string& prompt) {
    std::string userInput;
    do
    {
        std::cout << prompt;
        getline(std::cin, userInput);
    } while (!(userInput[0] > '0' && userInput[0] < '9'));

    return userInput[0] - 48;
}

std::string PresentationLayer::GetUsername(const std::string& prompt) {
    std::string userInput;

    std::cout << prompt;
    std::cin >> userInput;

    return userInput;
}