#ifndef FACTORY_H_
#define FACTORY_H_
#include <string>
using namespace std;

class Factory
{
public:
    virtual ~Factory() = default;
    virtual void print() const = 0;
    virtual void save() const = 0;
    virtual void load() = 0;
};

#endif