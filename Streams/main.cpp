#include <iostream>
#include <string>

using namespace std;

int main()
{
    // cout!  #1
    cout << "Hello World!" << endl;

    // cerr! #2
    cerr << "There was a problem!" << endl;

    // clog #3

    clog << "This is a log message!" << endl;

    // cin #4
    string name;
    cout << "Please type your name: ";
    cin >> name;

    cout << "You said your name is " << name << endl;

    return 0;
}
