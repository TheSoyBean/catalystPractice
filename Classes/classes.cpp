#include <iostream>
#include "shapes.hpp"

int main() {
    Shape rectangle;
    rectangle.setDimensions(14.2, 13.5);
    std::cout << "Shape 1 Details: \nWidth: " << rectangle.getWidth() 
              << " Height: " << rectangle.getHeight() 
              << " Area: " << rectangle.getArea() << " square units\n";

    Shape square;
    square.setDimensions(3.3, 3.3);
    std::cout << "Shape 2 Details: \nWidth: " << square.getWidth() 
              << " Height: " << square.getHeight() 
              << " Area: " << square.getArea() << " square units\n";

    Shape trapezoid;
    trapezoid.setDimensions(12.9,2.4);
    std::cout << "Shape 3 Details: \nWidth: " << square.getWidth() 
              << " Height: " << square.getHeight() 
              << " Area: " << square.getArea() << " square units\n";


    return 0;
}