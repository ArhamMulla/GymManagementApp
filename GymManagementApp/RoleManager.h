#ifndef ROLEMANAGER_H
#define ROLEMANAGER_H

#include "User.h"
#include <memory>
#include <string>

class RoleManager {
public:
    // Check if the user has admin privileges
    static bool isAdmin(const std::shared_ptr<User>& user);

    // Check if the user has trainer privileges
    static bool isTrainer(const std::shared_ptr<User>& user);

    // Check if the user has member privileges
    static bool isMember(const std::shared_ptr<User>& user);
};
#endif