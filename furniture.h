#ifndef FURNITURE_H_
#define FURNITURE_H_
#include <string>
#include "factory.h"
using namespace std;

class Furniture : public Factory
{
private:
    string type;
    double height;
    double width;
    double depth;
    string color;
    string material;
    int price;

public:
    virtual void print() const = 0;
    virtual void save() const = 0;
    virtual void load() = 0;
};

#endif