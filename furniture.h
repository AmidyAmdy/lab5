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

    string getType() const { return type; }
    void setType(string newType) { type = newType; }
    double getHeight() const { return height; }
    void setHeight(string newHeight) { height = newHeight; }
    double getWidth() const { return width; }
    void setWidth(string newWidth) { width = newWidth; }
    double getDepth() const { return depth; }
    void setDepth(string newDepth) { depth = newDepth; }
    string getColor() const { return color; }
    void setColor(string newColor) { color = newColor; }
    string getMaterial() const { return material; }
    void setMaterial(string newMaterial) { material = newMaterial; }
    int getPrice() const { return price; }
    void setPrice(string newPrice) { price = newPrice; }

    virtual void save() const = 0;
    virtual void load() = 0;

    void print(Furniture &furniture) const
};

#endif