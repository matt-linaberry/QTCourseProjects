#include <iostream>

using namespace std;

int main()
{

    /*auto func = [](){
        cout << "Hello World!" << endl;
    };

    func();*/

   /* [](){
            cout << "Hello World!" << endl;
        }();*/

    // define a lambda that takes parameters

    /*[](int a, int b) {
        cout << "The sum of a and b is " << a + b << endl;
    }(4, 8);*/

    // now return something from a lambda

//    cout << "Hello sum " << [](int a, int b)->int {
//        return a+b;
//}(4, 8);

//    int a = 7;
//    int b = 3;

//    [a,b]() {
//        cout << " a is " << a << endl;
//        cout << "b is " << b << endl;
//    }();

    // capturing by value
//    int c = 42;
//    auto func = [c]() {
//        cout << "The value of c is " << c << endl;
//    };

//    for (int i = 1; i < 5; i++) {
//        cout << "the outer value is " << c << endl;
//        func();
//        c = c + 1;
//    }

    // capture by reference!
//        int c = 42;
//        auto func = [&c]() {
//            cout << "The value of c is " << c << endl;
//        };

//        for (int i = 1; i < 5; i++) {
//            cout << "the outer value is " << c << endl;
//            func();
//            c = c + 1;
//        }

    // capture everything by value
//        int c = 42;
//        int d = 6;

//        auto func = [=]() {
//            cout << "The value of c is " << c << endl;
//            cout << "The value of d is " << d << endl;

//        };

//        for (int i = 1; i < 5; i++) {
//            cout << "the outer value is " << c << endl;
//            func();
//            c = c + 1;
//        }
// capture everything by reference
    int c = 42;
    int d = 6;

    auto func = [&]() {
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;

    };

    for (int i = 1; i < 5; i++) {
        cout << "the outer value is " << c << endl;
        cout << "the outer value is " << d << endl;

        func();
        c = c + 1;
        d = d + 1;
    }

    return 0;
}
