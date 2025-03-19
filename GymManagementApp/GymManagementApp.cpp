//#include <iostream>
//#include "Authentication.h"
//#include "RoleManager.h"
//
//void displayMenu() {
//    std::cout << "\n--- Gym Management Console Application ---" << std::endl;
//    std::cout << "1. Register" << std::endl;
//    std::cout << "2. Login" << std::endl;
//    std::cout << "3. Exit" << std::endl;
//    std::cout << "Enter your choice: ";
//}
//
//int main() {
//    Authentication auth;
//    int choice;
//
//    while (true) {
//        displayMenu();
//        std::cin >> choice;
//
//        if (choice == 1) {
//            std::string username, password, role;
//            std::cout << "Enter username: ";
//            std::cin >> username;
//            std::cout << "Enter password: ";
//            std::cin >> password;
//            std::cout << "Enter role (Admin/Trainer/Member): ";
//            std::cin >> role;
//            auth.registerUser(username, password, role);
//        }
//        else if (choice == 2) {
//            std::string username, password;
//            std::cout << "Enter username: ";
//            std::cin >> username;
//            std::cout << "Enter password: ";
//            std::cin >> password;
//
//            std::shared_ptr<User> user = auth.login(username, password);
//            if (user) {
//                if (RoleManager::isAdmin(user)) {
//                    std::cout << "Welcome, Admin! You have full access." << std::endl;
//                }
//                else if (RoleManager::isTrainer(user)) {
//                    std::cout << "Welcome, Trainer! Manage workouts and track progress." << std::endl;
//                }
//                else if (RoleManager::isMember(user)) {
//                    std::cout << "Welcome, Member! View your workout plans and progress." << std::endl;
//                }
//            }
//        }
//        else if (choice == 3) {
//            std::cout << "Exiting application. Goodbye!" << std::endl;
//            break;
//        }
//        else {
//            std::cout << "Invalid choice. Please try again." << std::endl;
//        }
//    }
//
//    return 0;
//}

#include <iostream>
#include "MemberService.h"

int main() {
    MemberService service;

    // Adding members
    service.addMember("John Doe", 25, "Male", 5.9, 75.0, "Gold", "2025-03-01", "2026-03-01");
    service.addMember("Jane Smith", 30, "Female", 5.5, 60.0, "Silver", "2025-02-01", "2026-02-01");

    // Display all members
    std::cout << "\nAll Members:" << std::endl;
    service.displayAllMembers();

    // Update a member
    std::cout << "\nUpdating Member Details..." << std::endl;
    service.updateMember("John Doe", 26, 5.9, 77.0, "Platinum", "2027-03-01");

    // Display all members after update
    std::cout << "\nMembers After Update:" << std::endl;
    service.displayAllMembers();

    // Find member by name
    auto member = service.findMemberByName("Jane Smith");
    if (member) {
        std::cout << "\nFound Member: " << member->getName() << std::endl;
    }
    else {
        std::cout << "\nMember not found." << std::endl;
    }

    return 0;
}

