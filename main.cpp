#include <iostream>
#include <vector>
#include <memory>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "shapelist.h"
#include "view.h"
#include "controller.h"

int main() {
    ShapeList model;
    Controller controller(model);
    int choice;
    while (true) {
        View::showMenu();
        std::cin >> choice;
        if (choice == 0) break;
        if (choice == 1 || choice == 2) {
            controller.createShape(choice);
        } else if (choice == 3) {
            controller.deleteShape();
        } else if (choice == 4) {
            model.showAll();
        } else {
            std::cout << "Invalid option.\n";
        }
    }
    View::showExit();
    return 0;
}
