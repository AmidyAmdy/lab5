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
    void remove(const string &type);
    void print_all() const;
    void saveToFile() const;
    void loadFromFile();
    bool operator!()
    {
        loadFromFile();
        return true;
    }
};

#endif