#ifndef KEEPER_H_
#define KEEPER_H_
#include <string>
#include <vector>
#include "factory.h"
using namespace std;

class Keeper
{
private:
    vector<Factory *> items;

public:
    Keeper() {}

    ~Keeper()
    {
        for (Factory *item : items)
        {
            delete item;
        }
    }

    void add(Factory *item);
    void remove(string &type);
    void print_all() const;
    void saveToFile() const;
    void loadFromFile() const;
};

#endif