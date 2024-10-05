#include "car.h"
#include "furniture.h"
#include "worker.h"
#include <iostream>
using namespace std;

void Car::print(Car &car) const
{
    cout << "/nMark:" << car.getMark() << endl;
    cout << "Model:" << car.getModel() << endl;
    cout << "Num:" << car.getNum() << endl;
}

void Worker::print(Worker &worker) const
{
    cout << "/nName:" << worker.getName() << endl;
    cout << "Position:" << worker.getPosition() << endl;
    cout << "Salary:" << worker.getSalary() << endl;
    cout << "Address:" << worker.getAddress() << endl;
    cout << "Phone number:" << worker.getPhonenumber() << endl;
}

void Furniture::print(Furniture &furniture) const
{
    cout << "/nType:" << furniture.getType() << endl;
    cout << "Height:" << furniture.getHeight() << endl;
    cout << "Width:" << furniture.getWidth() << endl;
    cout << "Depth:" << furniture.getDepth() << endl;
    cout << "Color:" << furniture.getColor() << endl;
    cout << "Material:" << furniture.getMaterial() << endl;
    cout << "Price:" << furniture.getPrice() << endl;
}

void Furniture::save(Furniture &furniture) const
{
    out << "FURNITURE" << endl;
    out << furniture.getType() << endl;
    out << furniture.getHeight() << endl;
    out << furniture.getWidth() << endl;
    out << furniture.getDepth() << endl;
    out << furniture.getColor() << endl;
    out << furniture.getMaterial() << endl;
    out << furniture.getPrice() << endl;
}

void Worker::save(Worker &worker) const
{
    out << "WORKER" << endl;
    out << worker.getName() << endl;
    out << worker.getPosition() << endl;
    out << worker.getSalary() << endl;
    out << worker.getAddress() << endl;
    out << worker.getPhonenumber() << endl;
}

void Car::save(Car &car) const
{
    out << "CAR" << endl;
    out << car.getMark() << endl;
    out << car.getModel() << endl;
    out << car.getNum() << endl;
}

void Furniture::load(Furniture &furniture, ifstream input)
{
    string str;
    int int1;
    double dbl;

    getline(input, str);
    furniture.setType(str);
    getline(input, dbl);
    furniture.setHeight(dbl);
    getline(input, dbl);
    furniture.setWidth(dbl);
    getline(input, dbl);
    furniture.setDepth(dbl);
    getline(input, str);
    furniture.setColor(str);
    getline(input, str);
    furniture.setMaterial(str);
    getline(input, int1);
    furniture.setPrice(int1);
}

void Worker::load(Worker &worker, ifstream input)
{
    string str;
    int int1;

    getline(input, str);
    worker.setName(str);
    getline(input, str);
    worker.setPosition(str);
    getline(input, int1);
    worker.setSalary(int1);
    getline(input, str);
    worker.setAddress(str);
    getline(input, str);
    worker.setPhonenumber(str);
}

void Car::load(Car &car, ifstream input)
{
    string str;

    getline(input, str);
    car.setMark(str);
    getline(input, str);
    car.setModel(str);
    getline(input, str);
    car.setNum(str);
}
