#include <iostream>
#include "rectangle.h"
#include "para.h"
#include "square.h"

using namespace std;


// The Para class




int main()
{
    Rectangle r;
    Rectangle r1(20, 20);
    Para p(30, 30, 30);
    Square s(40);

    cout << "The rectangle's 1 area is " << r1.getArea() << endl;
    cout << "The volume of shape is " << p.getVolume() << endl;
    cout << "Square area is " << s.getArea() << endl;
    return 0;
}
