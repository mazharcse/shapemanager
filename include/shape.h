#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
public:
    virtual ~Shape() {}
    virtual std::string getType() const = 0;
    virtual void show() const = 0;
};

#endif // SHAPE_H
