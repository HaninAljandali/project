#ifndef FACULTYADVISOR_H
#define FACULTYADVISOR_H

#include <iostream>
#include <vector>
#include <string>
#include "User.h"

class FacultyAdvisor : public User {
    std::string department;
    std::vector<std::string> schedule;
public:
    FacultyAdvisor(std::string name, std::string dept) : User(name), department(dept) {}

    void displayInfo() const override {
        std::cout << "Faculty Advisor Name: " << userName << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Schedule: ";
        for (const auto& scheduleItem : schedule) {
            std::cout << scheduleItem << " ";
        }
        std::cout << std::endl;
    }

    void setSchedule(const std::vector<std::string>& schedule) {
        this->schedule = schedule;
    }

    std::string getDepartment() const {
        return department;
    }
};

#endif // FACULTYADVISOR_H
