#include "Member.h"
#include <iostream>

Member::Member(const std::string& name, int age, const std::string& gender, float height, float weight,
    const std::string& membershipType, const std::string& startDate, const std::string& expiryDate)
    : name(name), age(age), gender(gender), height(height), weight(weight),
    membershipType(membershipType), startDate(startDate), expiryDate(expiryDate) {
}

// Getters
std::string Member::getName() const { return name; }
int Member::getAge() const { return age; }
std::string Member::getGender() const { return gender; }
float Member::getHeight() const { return height; }
float Member::getWeight() const { return weight; }
std::string Member::getMembershipType() const { return membershipType; }
std::string Member::getStartDate() const { return startDate; }
std::string Member::getExpiryDate() const { return expiryDate; }

// Setters
void Member::setAge(int age) { this->age = age; }
void Member::setHeight(float height) { this->height = height; }
void Member::setWeight(float weight) { this->weight = weight; }
void Member::setMembershipType(const std::string& type) { this->membershipType = type; }
void Member::setExpiryDate(const std::string& date) { this->expiryDate = date; }

// Display member details
void Member::displayMemberDetails() const {
    std::cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender
        << "\nHeight: " << height << " m\nWeight: " << weight << " kg"
        << "\nMembership Type: " << membershipType << "\nStart Date: " << startDate
        << "\nExpiry Date: " << expiryDate << "\n";
}
