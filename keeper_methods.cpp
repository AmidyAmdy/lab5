#include "keeper.h"
#include "factory.h"
#include "car.h"
#include "worker.h"
#include "furniture.h"
#include "exceptions.h"
#include <iostream>
#include <fstream>
using namespace std;

void Keeper::add(Factory *item)
{
    items.push_back(item);
}

void Keeper::remove(const string &type)
{
    for (auto it = items.begin(); it != items.end();)
    {
        if ((type == "Worker" && dynamic_cast<Worker *>(*it)) ||
            (type == "Car" && dynamic_cast<Car *>(*it)) ||
            (type == "Furniture" && dynamic_cast<Furniture *>(*it)))
        {
            cout << "Deleting " << type << endl;
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
    for (int i = 0; i < items.size(); i++)
        items[i]->print();
}

void Keeper::saveToFile() const
{
    cout << "\nSaving to the file" << endl;
    ofstream out;
    out.open("keeper.txt");

    out << items.size() << endl;

    if (out.is_open())
    {
        for (int i = 0; i < items.size(); i++)
            items[i]->save(out);
    }
    out.close();
}

void Keeper::loadFromFile()
{
    ifstream input("keeper.txt");
    if (!input)
        throw FileOpenException("Error with opening keeper.txt!");

    try
    {
        cout << "Loading from the file" << endl;

        int count;
        string type;
        string line;
        getline(input, line);
        count = stoi(line);
        for (int i = 0; i < count; i++)
        {
            getline(input, type);
            if (type == "FURNITURE")
            {
                Factory *item = new Furniture();
                item->load(input);
                items.push_back(item);
            }
            else if (type == "WORKER")
            {
                Factory *item = new Worker();
                item->load(input);
                items.push_back(item);
            }
            else
            {
                Factory *item = new Car();
                item->load(input);
                items.push_back(item);
            }
        }

        input.close();
    }

    catch (const InvalidInputException &e)
    {
        cerr
            << e.what() << endl;
    }
}