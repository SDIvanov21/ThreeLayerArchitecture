#pragma once

#include "PresentationLayer.h"
#include "DataAccessLayer.h"

#include <string>

class BusinessLogicLayer {
public:
    void ProcessUserInput(int choice);
    bool SignUp(const std::string& username, const std::string& password);

    PresentationLayer* presLayer;
    DataAccessLayer* dataLayer;
};