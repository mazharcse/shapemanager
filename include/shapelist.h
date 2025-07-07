#ifndef SHAPELIST_H
#define SHAPELIST_H
#include <vector>
#include <memory>
#include "shape.h"

class ShapeList {
    std::vector<std::unique_ptr<Shape>> shapes;
public:
    void add(std::unique_ptr<Shape> s);
    void remove(int idx);
    void showAll() const;
    int size() const;
    const Shape* get(int idx) const;
};

#endif // SHAPELIST_H
