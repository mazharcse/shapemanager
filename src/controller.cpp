#include "controller.h"
#include "shape.h"
#include <iostream>

Controller::Controller(ShapeList& m) : model(m) {}

void Controller::showDeleteInfo(int idx) const {
    const Shape* s = model.get(idx);
    if (s) {
        std::cout << "Deleting [" << idx << "] " << s->getType() << std::endl;
    }
}

void Controller::createShape(int type) {
    auto shape = Shape::create(type);
    if (shape) {
        std::cout << "Created [" << model.size() << "] " << shape->getType() << std::endl;
        model.add(std::move(shape));
    }
}

void Controller::deleteShape() {
    int idx;
    std::cout << "Enter shape index to delete (starting from 0): ";
    std::cin >> idx;
    showDeleteInfo(idx);
    model.remove(idx);
}
