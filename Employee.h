#pragma once

#include <string>
#include <iostream>

using namespace std;

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

        friend ostream & operator<<(ostream& out, const Employee& emp) {
            out << "Name: " << emp.name << "\tPosition: " << emp.position << "\tAge: " << emp.age;
            return out;
        }
};