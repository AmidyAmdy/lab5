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
    explicit Furniture(const string &type, double height, double width, double depth, const string &color,
                       const string &material, int price)
        : type(type), height(height), width(width), depth(depth), color(color), material(material), price(price) {}
    Furniture(const Furniture &other)
        : type(other.type), height(other.height), width(other.width),
          depth(other.depth), color(other.color), material(other.material), price(other.price) {}
    Furniture() : type("Unknown"), height(0.0), width(0.0),
                  depth(0.0), color("Unknown"), material("Unknown"), price(0) {}
    ~Furniture() {}

    string getType() const { return type; }
    void setType(string newType) { type = newType; }
    double getHeight() const { return height; }
    void setHeight(double newHeight) { height = newHeight; }
    double getWidth() const { return width; }
    void setWidth(double newWidth) { width = newWidth; }
    double getDepth() const { return depth; }
    void setDepth(double newDepth) { depth = newDepth; }
    string getColor() const { return color; }
    void setColor(string newColor) { color = newColor; }
    string getMaterial() const { return material; }
    void setMaterial(string newMaterial) { material = newMaterial; }
    int getPrice() const { return price; }
    void setPrice(int newPrice) { price = newPrice; }

    void save(ofstream &out) const override;
    void load(ifstream &input) override;

    void print() const override;
};

#endif