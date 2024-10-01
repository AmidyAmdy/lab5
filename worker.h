#ifndef WORKER_H_
#define WORKER_H_
#include <string>
#include <iostream>
#include "factory.h"
using namespace std;

class Worker : public Factory
{
private:
    string name;
    string position;
    int salary;
    string address;
    string phone_number;

public:
    explicit Worker(const string &name = "Unknown", const string &position = "Unknown", int salary = 0, const string &address = "Unknown",
                    const string &phone_number = "Unknown") : name(name), position(position), salary(salary), address(address), phone_number(phone_number) {}
    Worker(const Worker &other) : name(other.name), position(other.position), salary(other.salary),
                                  address(other.address), phone_number(other.phone_number) {}
    explicit Worker() : name("Unknown"), position("Unknown"), salary(0), address("Unknown"), phone_number("Unknown") {}
    ~Worker() {}

    virtual void save() const = 0;
    virtual void load() = 0;

    void print() const override
    {
        cout << "WORKER" << endl;

        if (name == "Unknown")
            cout << "Warning: Name is not set." << endl;
        else
            cout << "Name: " << name << endl;

        if (position == "Unknown")
            cout << "Warning: Position is not set." << endl;
        else
            cout << "Position: " << position << endl;

        if (salary <= 0)
            cout << "Warning: Salary is not set or invalid." << endl;
        else
            cout << "Salary: " << salary << endl;

        if (address == "Unknown")
            cout << "Warning: Address is not set." << endl;
        else
            cout << "Address: " << address << endl;

        if (phone_number == "Unknown")
            cout << "Warning: Phone number is not set." << endl;
        else
            cout << "Phone number: " << phone_number << endl;
    }
};

#endif