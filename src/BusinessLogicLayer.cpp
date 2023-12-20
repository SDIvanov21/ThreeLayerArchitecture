#include "BusinessLogicLayer.h"

void BusinessLogicLayer::ProcessUserInput(int choice) {
    switch (choice) {
    case 1: {
        std::string username = presLayer->GetUserData("Enter username: ");
        std::string password = presLayer->GetUserData("Enter password: ");
        if (SignUp(username, password)) {
            presLayer->Print("Sign up successful!\n");
        }
        else {
            presLayer->Print("Account already exists!\n");
        }
        break;
    }
    case 2:
        presLayer->Print("Exiting->->->\n");
    default:
        presLayer->Print("Invalid choice. Please try again.\n");
    }
}

bool BusinessLogicLayer::SignUp(const std::string& username, const std::string& password) {
    // Check if the account already exists
    if (dataLayer->DoesAccountExist(username)) {
        return false; // Account already exists
    }

    // Add the new account
    dataLayer->AddAccount(username, password);
    return true;
}