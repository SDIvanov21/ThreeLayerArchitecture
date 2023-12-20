#pragma once

#include "PresentationLayer.h"
#include "DataAccessLayer.h"

#include <string>

class BusinessLogicLayer {
public:
    int ProcessUserInput(int choice);
    bool SignUp(const std::string& username);

    PresentationLayer* presLayer;
    DataAccessLayer* dataLayer;
};