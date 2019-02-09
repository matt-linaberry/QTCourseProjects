#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

// THe square class
class Square: public Rectangle {
public:
    Square(int side):Rectangle(side, side) {

    }
private:

};
#endif // SQUARE_H
