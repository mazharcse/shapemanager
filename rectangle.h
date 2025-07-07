#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h);
    std::string getType() const override;
    void show() const override;
};

#endif // RECTANGLE_H
