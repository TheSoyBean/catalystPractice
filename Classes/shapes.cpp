#include "shapes.hpp"

void Shape::setDimensions(double w, double h) {
    width = w;
    height = h;
}

double Shape::getArea() {
    return width * height;
}

double Shape::getWidth() {
    return width;
}

double Shape::getHeight() {
    return height;
}
