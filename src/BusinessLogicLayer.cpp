#include "BusinessLogicLayer.h"

int BusinessLogicLayer::ProcessUserInput(int choice) {
    switch (choice) {
    case 1: {
        std::string username = presLayer->GetUsername("Enter username: ");
        if (SignUp(username)) {
            return 1;
        }
        else {
            return 2;
        }
        break;
    }
    case 2:
        return 3;
    default:
        return 4;
    }
}

bool BusinessLogicLayer::SignUp(const std::string& username) {
    // Check if the account already exists
    if (dataLayer->DoesAccountExist(username)) {
        return false; // Account already exists
    }

    // Add the new account
    dataLayer->AddAccount(username);
    return true;
}