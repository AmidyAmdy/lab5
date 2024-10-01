#ifndef CAR_H_
#define CAR_H_
#include <string>
#include <iostream>
#include "factory.h"
using namespace std;

class Car : public Factory
{
private:
    string mark;
    string model;
    string num;

public:
    explicit Car(const string &mark = "Unknown", const string &model = "Unknown", const string &num = "Unknown") : mark(mark), model(model), num(num) {}
    Car(const Car &other) : mark(other.mark), model(other.model), num(other.num) {}
    explicit Car() : mark("Unknown"), model("Unknown"), num("Unknown") {}
    ~Car() {}

    virtual void save() const = 0;
    virtual void load() = 0;

    void print() const
    {
        cout << "CAR" << endl;

        if (mark == "Unknown")
            cout << "Warning: Mark is not set." << endl;
        else
            cout << "Mark: " << mark << endl;

        if (model == "Unknown")
            cout << "Warning: Model is not set." << endl;
        else
            cout << "Model: " << model << endl;

        if (num == "Unknown")
            cout << "Warning: Number is not set." << endl;
        else
            cout << "Num: " << num << endl;
    }
};

#endif