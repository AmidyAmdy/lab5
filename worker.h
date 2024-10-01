#ifndef WORKER_H_
#define WORKER_H_
#include <string>
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
    virtual void print() const = 0;
    virtual void save() const = 0;
    virtual void load() = 0;
};

#endif