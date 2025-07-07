#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape {
    double radius;
public:
    Circle(double r);
    std::string getType() const override;
    void show() const override;
};

#endif // CIRCLE_H
