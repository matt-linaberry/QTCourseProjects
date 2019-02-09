#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
    clog <<  "Defualt constructor was called!" << endl;
    this->length = 5;
    this->width = 5;
}

/*
Rectangle::Rectangle(int w, int l) {
    clog << "Customer cunstructor here!";
    this->width = w;
    this->length = l;
}\
*/

Rectangle::Rectangle(int w, int l):width(w), length(l) {
    clog << "Customer cunstructor here!" << endl;
}

void Rectangle::setWidth(int width)  {
    this->width = width;
}

void Rectangle::setLength(int length) {
    this->length = length;
}
