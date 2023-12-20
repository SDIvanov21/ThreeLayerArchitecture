#include "PresentationLayer.h"
#include "BusinessLogicLayer.h"
#include "DataAccessLayer.h"

int main() {
    PresentationLayer presentationLayer;
    BusinessLogicLayer businessLogicLayer;
    DataAccessLayer dataAccessLayer;
    businessLogicLayer.presLayer = &presentationLayer;
    businessLogicLayer.dataLayer = &dataAccessLayer;

    int choice;
    do {
        presentationLayer.DisplayMenu();
        choice = presentationLayer.GetUserChoice("Enter your choice: ");
        switch (businessLogicLayer.ProcessUserInput(choice))
        {
        case 1:
            presentationLayer.Print("Sign up successful!\n");
            break;
        case 2:
            presentationLayer.Print("Account already exists!\n");
            break;
        case 3:
            presentationLayer.Print("Exiting...\n");
            break;
        case 4:
            presentationLayer.Print("Invalid choice. Please try again.\n");
        }

    } while (choice != 2);

    return 0;
}