#include "DataAccessLayer.h"

#include <fstream>
#include <sstream>

bool DataAccessLayer::DoesAccountExist(const std::string& username) {
    std::ifstream file("./data/accounts.csv");
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string storedUsername;
        if (std::getline(iss, storedUsername, ',')) {
            if (storedUsername == username) {
                return true; // Account found
            }
        }
    }
    return false; // Account not found
}

void DataAccessLayer::AddAccount(const std::string& username, const std::string& password) {
    std::ofstream file("./data/accounts.csv", std::ios_base::app);
    file << username << ',' << password << "\n";
}