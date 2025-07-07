#include "shapelist.h"
#include <iostream>

void ShapeList::add(std::unique_ptr<Shape> s) {
    shapes.push_back(std::move(s));
}

void ShapeList::remove(int idx) {
    if (idx >= 0 && idx < (int)shapes.size()) {
        shapes.erase(shapes.begin() + idx);
        std::cout << "Shape deleted.\n";
    } else {
        std::cout << "Invalid index.\n";
    }
}

void ShapeList::showAll() const {
    for (size_t i = 0; i < shapes.size(); ++i) {
        std::cout << i << ": ";
        shapes[i]->show();
    }
}

int ShapeList::size() const {
    return shapes.size();
}

const Shape* ShapeList::get(int idx) const {
    if (idx >= 0 && idx < (int)shapes.size())
        return shapes[idx].get();
    return nullptr;
}
