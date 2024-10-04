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

    void remove(string &type)
    {
        for (auto it = items.begin(); it != items.end();)
        {
            if ((type == "Worker" && dynamic_cast<Worker *>(*it)) ||
                (type == "Car" && dynamic_cast<Car *>(*it)) ||
                (type == "Furniture" && dynamic_cast<Furniture *>(*it)))
            {
                delete *it;
                it = items.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }

    void print_all()
    {
        for (int i = 0; i < items.size(), i++)
            items[i]->print;
    }
};

#endif