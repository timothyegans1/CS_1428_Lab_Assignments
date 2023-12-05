//Author:Timothy Egans, tbe13

//Date:Oct/8/2023

// Finish the following program which prints 'odd' or 'even' for all integers

//from 0 to the user's given number inclusively using a While Loop.
#include <iostream>

using namespace std;

int main()
{

    int number;
    int counter = 0; //initialize the variable

    // user enters a number
    cout << "Enter a positive integer to print odd or even for";
    cout << "all numbers from 0 to the given number up to 100." << endl;
    cin >> number;

    // check for invalid user input
    if (number < 1  || number > 100)
    {
        cout << "Invalid Input" << endl;
        return -1; // terminate program
    }

    // TODO - add your code here. Print 'odd' or 'even' inside a while loop

    //for numbers from 0 to the user's number.
    // hint: increment a counter variable inside the loop.

    // hint: number%2==0 if a number is even

    while(counter <= number){

        if(counter % 2 == 0) //checking number if even
        {
            cout << counter << ": even :)" << endl;
        }
        else
        {
            cout << counter << ": odd :(" << endl;
        }
        counter++; // Incrementing the counter
    }

    return 0;
}
