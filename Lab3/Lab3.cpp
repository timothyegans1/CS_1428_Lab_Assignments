// Timothy Egans, tbe13
// 9/18/2023
//CS1428 Lab
//Lab 3
//Description: this program will allow the user to play a game of Red,
//  Green, Blue Squirrels against a randomized computer opponent

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
        << " 1. Red" << endl
        << " 2. Blue" << endl
        << " 3. Green" << endl
        << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):
    /*
    if (user_num == 2 && comp_num == 1)
    {
		cout << "You won!" << endl;
	}
    if (user_num == 1 && comp_num == 3)
    {
        cout << "You won!" << endl;
    }
    if (user_num == 3 && comp_num == 2)
    {
        cout << "You won!" << endl;
    }


    else if (user_num == 1 && comp_num == 2)
    {
		cout << "You lose!" << endl;
	}
    else if (user_num == 3 && comp_num == 1)
    {
        cout << "You lose!" << endl;
    }
    else if (user_num == 2 && comp_num == 3)
    {
        cout << "You lose!" << endl;
    }


    else if (user_num == 2 && comp_num == 2)
    {
		cout << "You both chose Red! It's a tie!" << endl;
	}
    else if (user_num == 1 && comp_num == 1)
    {
		cout << "You both chose Blue! It's a tie!" << endl;
	}
    else if (user_num == 3 && comp_num == 3)
    {
		cout << "You both chose Green! It's a tie!" << endl;
	} */

    if (user_num == 1 && comp_num == 3)
    {
		cout << "You won!" << endl;
        cout << "Red beats Green" << endl;
	}
    else if (user_num == 2 && comp_num == 1)
    {
		cout << "You won!" << endl;
        cout << "Blue beats Red" << endl;
	}
    else if (user_num == 3 && comp_num == 2)
    {
		cout << "You won!" << endl;
        cout << "Green beats Blue" << endl;
	}

    else if (user_num == 1 && comp_num == 2)
    {
		cout << "You lose!" << endl;
	}
    else if (user_num == 2 && comp_num == 3)
    {
		cout << "You lose!" << endl;
	}
    else if (user_num == 3 && comp_num == 1)
    {
		cout << "You lose!" << endl;
	}

    else if (user_num == 1 && comp_num == 1)
    {
		cout << "You both chose Red! It's a tie!" << endl;
	}
    else if (user_num == 2 && comp_num == 2)
    {
		cout << "You both chose Blue! It's a tie!" << endl;
	}
    else if (user_num == 3 && comp_num == 3)
    {
		cout << "You both chose Green! It's a tie!" << endl;
	}

    else
    {
		cout << "Invalid input! Terminating Program" << endl;
	}











   

    // Exit the program:
    return 0;
}
