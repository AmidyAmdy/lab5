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

    string getMark() const { return mark; }
    void setMark(string newMark) { mark = newMark; }
    string getModel() const { return model; }
    void setModel(string newModel) { model = newModel; }
    string getNum() const { return num; }
    void setNum(string newNum) { num = newNum; }

    virtual void save() const = 0;
    virtual void load() = 0;

    void print(Car &car) const;
};

#endif