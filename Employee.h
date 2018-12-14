#pragma once

#include <string>

using namespace std;    // for std::string

class Employee {
    public:
        string name;
        string position;
        unsigned int age;

        Employee() { }

        Employee(string inputName, string inputPosition, unsigned int inputAge) {
            name = inputName;
            position = inputPosition;
            age = inputAge;
        }

        // string getName() { return name; }
        // string getPosition() { return position; }
        // unsigned int getAge() { return age; }
};