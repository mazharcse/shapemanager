#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <memory>

class Shape {
public:
    virtual ~Shape() {}
    virtual std::string getType() const = 0;
    virtual void show() const = 0;
    // Factory method
    static std::unique_ptr<Shape> create(int type);
};

#endif // SHAPE_H
