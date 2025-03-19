#include "User.h"

// Constructor implementation
User::User(const std::string& username, const std::string& password, const std::string& role)
    : username(username), password(password), role(role) {
}

// Getter for username
std::string User::getUsername() const {
    return username;
}

// Getter for role
std::string User::getRole() const {
    return role;
}

// Validate password
bool User::validatePassword(const std::string& inputPassword) const {
    return inputPassword == password;
}
