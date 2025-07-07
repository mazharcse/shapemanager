#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "shapelist.h"

class Controller {
    ShapeList& model;
public:
    Controller(ShapeList& m);
    void createShape(int type);
    void deleteShape();
    void showDeleteInfo(int idx) const;
};

#endif // CONTROLLER_H
