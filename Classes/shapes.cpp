#include <iostream>
#include "shapes.hpp"

void Shape::setDimensions(double w, double h){
    width = w;
    height = h;

    }
double Shape::getArea(){
    double area = width * height;
    return area;
}