#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int age;
    std::string gender;
    float height; // in meters
    float weight; // in kg
    std::string membershipType;
    std::string startDate;
    std::string expiryDate;

public:
    Member(const std::string& name, int age, const std::string& gender, float height, float weight,
        const std::string& membershipType, const std::string& startDate, const std::string& expiryDate);

    // Getters
    std::string getName() const;
    int getAge() const;
    std::string getGender() const;
    float getHeight() const;
    float getWeight() const;
    std::string getMembershipType() const;
    std::string getStartDate() const;
    std::string getExpiryDate() const;

    // Setters
    void setAge(int age);
    void setHeight(float height);
    void setWeight(float weight);
    void setMembershipType(const std::string& type);
    void setExpiryDate(const std::string& date);

    void displayMemberDetails() const;
};

#endif // MEMBER_H

