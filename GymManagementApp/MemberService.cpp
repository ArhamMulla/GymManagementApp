#pragma once
#include "MemberService.h"
#include <iostream>

void MemberService::addMember(const std::string& name, int age, const std::string& gender, float height, float weight,
    const std::string& membershipType, const std::string& startDate, const std::string& expiryDate) {
    auto member = std::make_shared<Member>(name, age, gender, height, weight, membershipType, startDate, expiryDate);
    members.push_back(member);
    std::cout << "Member added successfully!" << std::endl;
}

bool MemberService::updateMember(const std::string& name, int age, float height, float weight,
    const std::string& membershipType, const std::string& expiryDate) {
    for (auto& member : members) {
        if (member->getName() == name) {
            member->setAge(age);
            member->setHeight(height);
            member->setWeight(weight);
            member->setMembershipType(membershipType);
            member->setExpiryDate(expiryDate);
            std::cout << "Member details updated successfully!" << std::endl;
            return true;
        }
    }
    std::cout << "Member not found." << std::endl;
    return false;
}

void MemberService::displayAllMembers() const {
    if (members.empty()) {
        std::cout << "No members available." << std::endl;
        return;
    }

    for (const auto& member : members) {
        std::cout << "Name: " << member->getName() << ", Age: " << member->getAge()
            << ", Gender: " << member->getGender() << ", Height: " << member->getHeight()
            << ", Weight: " << member->getWeight() << ", Membership: " << member->getMembershipType()
            << ", Start Date: " << member->getStartDate() << ", Expiry Date: " << member->getExpiryDate()
            << std::endl;
    }
}

std::shared_ptr<Member> MemberService::findMemberByName(const std::string& name) const {
    for (const auto& member : members) {
        if (member->getName() == name) {
            return member;
        }
    }
    return nullptr;
}
