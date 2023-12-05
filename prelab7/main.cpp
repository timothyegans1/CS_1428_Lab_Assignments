// Lab 7 Prelab Assignment
// Timothy Egans, tbe13
//10/15/2023
// Move the indicated code into functions.

#include <iostream>
using namespace std;
double payment;

int payments;
float principal;

double population;

void printWelcome() {
    cout << "Welcome to my fabulous payment calculator!" << endl;
    cout << "This program will take a principal amount and a number of payments , and" << endl;
    cout << "return the cost of each payment!"
            << endl << endl;
}

double promptUser() {
    cout << "please enter a principal ammount : ";
    cin >> principal;
    cout << "please enter a number of payments: ";
    cin >> payments;
    population = static_cast <double>((1.2 * principal) / payments);
    return 0;
}

int main()
{




    // TODO - write a void function to print out to console this welcome message

    printWelcome();

    // TODO - write a function that will prompt the user for the principal ammount,
    // and a number of payments. Then calculate and return the cost of each
    // payment (returns a double). Remember to assign the retuned value
    // to the variable 'payment'.
    promptUser();
    // this should remain inside your main function
    cout << "Each payment will cost : " << population;

    return 0;

}