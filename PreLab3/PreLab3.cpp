// PreLab 3 Assignment
//copy and paste into the IDE

// The following is a simple dice roller for a table top game.
// The code to randomly generate a number is provided.
// Don't worry about fully understanding the provided code
// as you will not be tested over it.

// Finish the program by adding requested code marked "ADD HERE"

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

    int magic_number;

    // seeds rand (needed for getting random numbers)
    srand(time(NULL));

    // randomly generates a number 1 - 10 inclusively
    magic_number = rand() % 10 + 1;

    cout << "You roll a " << magic_number << ": ";


    // ADD HERE - write an IF statement that prints "CRITICAL HIT!!"
    // if the user rolls a 10
    if (magic_number == 10)
    {
		cout << "CRITICAL HIT!!" << endl;
	}

    // ADD HERE - write an ELSE IF statement that prints "Attack Strikes"
    // if the user rolls between 7 and 9 inclusive.
    if (magic_number >= 7 && magic_number <= 9)
    {
        cout << "Attack Strikes" << endl;
    }

    // ADD HERE - write an ELSE statement that prints "Attack Misses"
    // for any other roll
    if (magic_number < 7)
    {
		cout << "Attack Misses" << endl;
	}

    return 0;
}