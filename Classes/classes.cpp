#include <iostream>
#include "shapes.hpp"

int main() {
    Shape rectangle;
    rectangle.setDimensions(25.0,13.5);
    std::cout <<  width << height << rectangle.getArea() << "\n";
    return 0;
}