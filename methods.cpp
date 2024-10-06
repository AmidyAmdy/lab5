#include "car.h"
#include "furniture.h"
#include "worker.h"
#include <fstream>
#include <iostream>
using namespace std;

void Car::print() const
{
    cout << "\nCAR:" << endl;
    cout << "\nMark:" << mark << endl;
    cout << "Model:" << model << endl;
    cout << "Num:" << num << endl;
}

void Worker::print() const
{
    cout << "\nWORKER:" << endl;
    cout << "\nName:" << name << endl;
    cout << "Position:" << position << endl;
    cout << "Salary:" << salary << endl;
    cout << "Address:" << address << endl;
    cout << "Phone number:" << phone_number << endl;
}

void Furniture::print() const
{
    cout << "\nFURNITURE:" << endl;
    cout << "\nType:" << type << endl;
    cout << "Height:" << height << endl;
    cout << "Width:" << width << endl;
    cout << "Depth:" << depth << endl;
    cout << "Color:" << color << endl;
    cout << "Material:" << material << endl;
    cout << "Price:" << price << endl;
}

void Furniture::save(ofstream &out) const
{
    out << "FURNITURE" << endl;
    out << type << endl;
    out << height << endl;
    out << width << endl;
    out << depth << endl;
    out << color << endl;
    out << material << endl;
    out << price << endl;
}

void Worker::save(ofstream &out) const
{
    out << "WORKER" << endl;
    out << name << endl;
    out << position << endl;
    out << salary << endl;
    out << address << endl;
    out << phone_number << endl;
}

void Car::save(ofstream &out) const
{
    out << "CAR" << endl;
    out << mark << endl;
    out << model << endl;
    out << num << endl;
}

void Furniture::load(ifstream &input)
{
    string line;
    getline(input, type);
    getline(input, line);
    height = stod(line);
    getline(input, line);
    width = stod(line);
    getline(input, line);
    depth = stod(line);
    getline(input, color);
    getline(input, material);
    getline(input, line);
    price = stoi(line);
}

void Worker::load(ifstream &input)
{
    string line;
    getline(input, name);
    getline(input, position);
    getline(input, line);
    salary = stoi(line);
    getline(input, address);
    getline(input, phone_number);
}

void Car::load(ifstream &input)
{
    getline(input, mark);
    getline(input, model);
    getline(input, num);
}
