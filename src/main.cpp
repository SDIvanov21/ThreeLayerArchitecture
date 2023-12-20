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
        businessLogicLayer.ProcessUserInput(choice);

    } while (choice != 2);

    return 0;
}