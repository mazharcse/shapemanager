#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

std::string Rectangle::getType() const {
    return "Rectangle";
}

void Rectangle::show() const {
    std::cout << "Rectangle: width = " << width << ", height = " << height << std::endl;
}
