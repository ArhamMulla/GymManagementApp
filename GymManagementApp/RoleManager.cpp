#include "RoleManager.h"

// Check if the user has admin privileges
bool RoleManager::isAdmin(const std::shared_ptr<User>& user) {
    return user->getRole() == "Admin";
}

// Check if the user has trainer privileges
bool RoleManager::isTrainer(const std::shared_ptr<User>& user) {
    return user->getRole() == "Trainer";
}

// Check if the user has member privileges
bool RoleManager::isMember(const std::shared_ptr<User>& user) {
    return user->getRole() == "Member";
}
