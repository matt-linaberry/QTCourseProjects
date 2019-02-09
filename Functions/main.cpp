#include <iostream>

using namespace std;

void sayHi() {
    cout << "Hello Matt!" << endl;
}

int sumation(int a, int b) {
    return a + b;
}

double sumation(double a, double b) {
    return a+ b;
}

int main()
{
    sayHi();
    cout << "result of 9 and 14 is " << sumation(9, 14) << endl;
    cout << "result of 4.7 and 11.9 is " << sumation(4.7, 11.9) << endl;
    return 0;
}
