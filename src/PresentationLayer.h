#pragma once

#include <string>

class PresentationLayer {
public:
    void Print(const std::string& message);
    void DisplayMenu();
    int GetUserChoice(const std::string& prompt);
    std::string GetUserData(const std::string& prompt);
};