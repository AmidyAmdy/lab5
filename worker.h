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
    explicit Worker(const string &name, const string &position, int salary, const string &address,
                    const string &phone_number) : name(name), position(position), salary(salary), address(address), phone_number(phone_number) {}
    Worker(const Worker &other) : name(other.name), position(other.position), salary(other.salary),
                                  address(other.address), phone_number(other.phone_number) {}
    Worker() : name("Unknown"), position("Unknown"), salary(0), address("Unknown"), phone_number("Unknown") {}
    ~Worker() {}

    string getName() const { return name; }
    void setName(string newName) { name = newName; }
    string getPosition() const { return position; }
    void setPosition(string newPosition) { position = newPosition; }
    int getSalary() const { return salary; }
    void setSalary(int newSalary) { salary = newSalary; }
    string getAddress() const { return address; }
    void setAddress(string newAddress) { address = newAddress; }
    string getPhonenumber() const { return phone_number; }
    void setPhonenumber(string newPhonenumber) { phone_number = newPhonenumber; }

    void save(ofstream &out) const override;
    void load(ifstream &input) override;

    void print() const override;
};

#endif