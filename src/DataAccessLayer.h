#pragma once

#include <string>

class DataAccessLayer {
public:
    bool DoesAccountExist(const std::string& username);
    void AddAccount(const std::string& username, const std::string& password);
};