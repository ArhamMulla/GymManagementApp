#include "Authentication.h"
#include <iostream>

// Constructor with sample users
Authentication::Authentication() {
    users.push_back(std::make_shared<User>("admin", "admin123", "Admin"));
    users.push_back(std::make_shared<User>("trainer", "trainer123", "Trainer"));
    users.push_back(std::make_shared<User>("member", "member123", "Member"));
}

// Register a new user
bool Authentication::registerUser(const std::string& username, const std::string& password, const std::string& role) {
    if (isUsernameTaken(username)) {
        std::cout << "Error: Username already exists." << std::endl;
        return false;
    }

    users.push_back(std::make_shared<User>(username, password, role));
    std::cout << "User registered successfully!" << std::endl;
    return true;
}

// Authenticate user login
std::shared_ptr<User> Authentication::login(const std::string& username, const std::string& password) {
    for (const auto& user : users) {
        if (user->getUsername() == username && user->validatePassword(password)) {
            std::cout << "Login successful! Welcome, " << username << " (" << user->getRole() << ")." << std::endl;
            return user;
        }
    }
    std::cout << "Error: Invalid username or password." << std::endl;
    return nullptr;
}

// Check if username exists
bool Authentication::isUsernameTaken(const std::string& username) const {
    for (const auto& user : users) {
        if (user->getUsername() == username) {
            return true;
        }
    }
    return false;
}
