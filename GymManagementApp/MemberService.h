#ifndef MEMBERSERVICE_H
#define MEMBERSERVICE_H

#include "Member.h"
#include <vector>
#include <memory>

class MemberService {
private:
    std::vector<std::shared_ptr<Member>> members;

public:
    // Add a new member
    void addMember(const std::string& name, int age, const std::string& gender, float height, float weight,
        const std::string& membershipType, const std::string& startDate, const std::string& expiryDate);

    // Update member details by name
    bool updateMember(const std::string& name, int age, float height, float weight,
        const std::string& membershipType, const std::string& expiryDate);

    // Display all member details
    void displayAllMembers() const;

    // Find member by name
    std::shared_ptr<Member> findMemberByName(const std::string& name) const;
};

#endif // MEMBERSERVICE_H