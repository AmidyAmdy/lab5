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