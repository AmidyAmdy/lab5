#ifndef FURNITURE_H_
#define FURNITURE_H_
#include <string>
#include <iostream>
#include "factory.h"
using namespace std;

class Furniture : public Factory
{
private:
    string type;
    double height;
    double width;
    double depth;
    string color;
    string material;
    int price;

public:
    explicit Furniture(const string &type = "Unknown", double height = 0.0, double width = 0.0, double depth = 0.0, const string &color = "Unknown",
                       const string &material = "Unknown", int price = 0)
        : type(type), height(height), width(width), depth(depth), color(color), material(material), price(price) {}
    Furniture(const Furniture &other)
        : type(other.type), height(other.height), width(other.width),
          depth(other.depth), color(other.color), material(other.material), price(other.price) {}
    explicit Furniture() : type("Unknown"), height(0.0), width(0.0),
                           depth(0.0), color("Unknown"), material("Unknown"), price(0) {}
    ~Furniture() {}

    virtual void save() const = 0;
    virtual void load() = 0;

    void print() const
    {
        cout << "FURNITURE" << endl;

        if (type == "Unknown")
            cout << "Warning: Type is not set." << endl;
        else
            cout << "Type: " << type << endl;

        if (height <= 0.0)
            cout << "Warning: Height is not set or invalid." << endl;
        else
            cout << "Height: " << height << endl;

        if (width <= 0.0)
            cout << "Warning: Width is not set or invalid." << endl;
        else
            cout << "Width: " << width << endl;

        if (depth <= 0.0)
            cout << "Warning: Depth is not set or invalid." << endl;
        else
            cout << "Depth: " << depth << endl;

        if (color == "Unknown")
            cout << "Warning: Color is not set." << endl;
        else
            cout << "Color: " << color << endl;

        if (material == "Unknown")
            cout << "Warning: Material is not set." << endl;
        else
            cout << "Material: " << material << endl;

        if (price <= 0)
            cout << "Warning: Price is not set or invalid." << endl;
        else
            cout << "Price: " << price << endl;
    }
};

#endif