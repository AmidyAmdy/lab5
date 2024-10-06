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
    explicit Car(const string &mark, const string &model, const string &num) : mark(mark), model(model), num(num) {}
    Car(const Car &other) : mark(other.mark), model(other.model), num(other.num) {}
    Car() : mark("Unknown"), model("Unknown"), num("Unknown") {}
    ~Car() {}

    string getMark() const { return mark; }
    void setMark(string newMark) { mark = newMark; }
    string getModel() const { return model; }
    void setModel(string newModel) { model = newModel; }
    string getNum() const { return num; }
    void setNum(string newNum) { num = newNum; }

    void save(ofstream &out) const override;
    void load(ifstream &input) override;

    void print() const override;
};

#endif