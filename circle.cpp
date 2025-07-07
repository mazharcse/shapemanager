#include "circle.h"
#include <iostream>

Circle::Circle(double r) : radius(r) {}

std::string Circle::getType() const {
    return "Circle";
}

void Circle::show() const {
    std::cout << "Circle: radius = " << radius << std::endl;
}
