#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include "User.h"
#include <vector>
#include <memory>

class Authentication {
private:
    std::vector<std::shared_ptr<User>> users; // Using shared_ptr for memory management

public:
    // Constructor to initialize with sample users
    Authentication();

    // Register a new user
    bool registerUser(const std::string& username, const std::string& password, const std::string& role);

    // Authenticate user login
    std::shared_ptr<User> login(const std::string& username, const std::string& password);

    // Check if username already exists
    bool isUsernameTaken(const std::string& username) const;
};
#endif

