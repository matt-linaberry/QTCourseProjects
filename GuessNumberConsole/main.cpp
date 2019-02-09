#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int guessNumber, secretNumber;

    // init the generator~!
   srand (static_cast<unsigned int>((time(nullptr))));

    // between 1 and 10 pick a number
    secretNumber = rand() % 10 + 1;   // the range is 0-9 here, so add 1

    cout << "Hey!  Pick a damn number between 1 and 10! " << endl;
    do {
        cin >> guessNumber;
        if (guessNumber > secretNumber) {
            cout << "Lower!" << endl;
        }
        if (guessNumber < secretNumber) {
            cout << "Higher!" << endl;
        }
    } while(guessNumber != secretNumber);
    cout << "YOU GOT IT, YOU BASTARD!" << endl;


    return 0;
}
