#include "keeper.h"
#include "factory.h"
#include "car.h"
#include "worker.h"
#include "furniture.h"
#include <iostream>
using namespace std;

void Keeper::add(Factory *item)
{
    items.push_back(item);
}

void Keeper::remove(string &type)
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

void Keeper::print_all() const
{
    for (int i = 0; i < items.size(), i++)
        items[i]->print;
}

void Keeper::saveToFile() const
{
    ofstream out;
    out.open("keeper.txt");

    out << items.size() << endl;

    if (out.is_open())
    {
        for (int i = 0; i < items.size(), i++)
            items[i]->save();
    }
    out.close()
}

void Keeper::loadFromFile() const
{
    ifstream input("keeper.txt");
    if (!input)
    {
        cerr << "Ошибка при открытии файла!" << endl;
        return 1;
    }

    int count;
    string type;
    getline(input, count);
    for (int i = 0; i < count; i++)
    {
        getline(input, type);
        if (type == "FURNITURE")
        {
            Factory *item = new Furniture();
            item->load();
            items.push_back(item);
        }
        else if (type == "WORKER")
        {
            Factory *item = new Worker();
            item->load();
            items.push_back(item);
        }
        else
        {
            Factory *item = new Car();
            item->load();
            items.push_back(item);
        }
    }

    input.close()
}