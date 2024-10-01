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

    void add(Factory *item)
    {
        items.push_back(item);
    }

    void remove(int index)
    {
        if (index >= 0 && index < items.size())
        {
            delete items[index];
            items.erase(items.begin() + index);
        }
    }

    void print_all()
    {
        for (int i = 0; i < items.size(), i++)
            items[i]->print;
    }
};

#endif