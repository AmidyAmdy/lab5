#ifndef CAR_H_
#define CAR_H_
#include <string>
#include "factory.h"
using namespace std;

class Car : public Factory
{
private:
    string mark;
    string model;
    string num;

public:
    virtual void print() const = 0;
    virtual void save() const = 0;
    virtual void load() = 0;
};

#endif