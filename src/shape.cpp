#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>
#include <memory>

// No implementation needed for abstract base class

std::unique_ptr<Shape> Shape::create(int type) {
    if (type == 1) {
        double r;
        std::cout << "Enter radius: ";
        std::cin >> r;
        return std::make_unique<Circle>(r);
    } else if (type == 2) {
        double w, h;
        std::cout << "Enter width and height: ";
        std::cin >> w >> h;
        return std::make_unique<Rectangle>(w, h);
    }
    return nullptr;
}
