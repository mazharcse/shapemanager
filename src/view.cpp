#include "view.h"
#include <iostream>

void View::showMenu() {
    std::cout << "\nShape Manager Menu:\n";
    std::cout << "1. Create Circle\n";
    std::cout << "2. Create Rectangle\n";
    std::cout << "3. Delete Shape\n";
    std::cout << "4. Show All Shapes\n";
    std::cout << "0. Exit\n";
    std::cout << "Select option: ";
}

void View::showExit() {
    std::cout << "Exiting.\n";
}
