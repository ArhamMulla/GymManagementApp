#pragma once
#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string password;
    std::string role;

public:
    // Constructor
    User(const std::string& username, const std::string& password, const std::string& role);

    // Getters
    std::string getUsername() const;
    std::string getRole() const;

    // Password Validation
    bool validatePassword(const std::string& inputPassword) const;
};
#endif
