#include <iostream>
#include <vector>
#include <memory>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

void showMenu() {
    std::cout << "\nShape Manager Menu:\n";
    std::cout << "1. Create Circle\n";
    std::cout << "2. Create Rectangle\n";
    std::cout << "3. Delete Shape\n";
    std::cout << "4. Show All Shapes\n";
    std::cout << "0. Exit\n";
    std::cout << "Select option: ";
}

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    int choice;
    while (true) {
        showMenu();
        std::cin >> choice;
        if (choice == 0) break;
        if (choice == 1 || choice == 2) {
            auto shape = Shape::create(choice);
            if (shape) shapes.push_back(std::move(shape));
        } else if (choice == 3) {
            int idx;
            std::cout << "Enter shape index to delete (starting from 0): ";
            std::cin >> idx;
            if (idx >= 0 && idx < (int)shapes.size()) {
                shapes.erase(shapes.begin() + idx);
                std::cout << "Shape deleted.\n";
            } else {
                std::cout << "Invalid index.\n";
            }
        } else if (choice == 4) {
            for (size_t i = 0; i < shapes.size(); ++i) {
                std::cout << i << ": ";
                shapes[i]->show();
            }
        } else {
            std::cout << "Invalid option.\n";
        }
    }
    std::cout << "Exiting.\n";
    return 0;
}
