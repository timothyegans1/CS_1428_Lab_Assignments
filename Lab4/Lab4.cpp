//TO-DO: Timothy Egans, tbe13
//TO-DO: 09/25/23
//CS1428 Lab
//Lab 4
//Description: this program will calculate the cost of a TV
//    plan based on user choices.

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char user_choice;  //user's choice
    double price; //price of monthly package

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total cost of the
    // customer's monthly bill based on the selected plan.
    switch (user_choice) {
        case 'A':
			price = 19.99;
            cout << "Would you like to purchase the sports plan? (Y/N): " << endl;
            cin >> user_choice;
            if (user_choice == 'Y') {
				price += 9.99;
			}
            
			break;
		case 'B':
			price = 39.99;
            cout << "Would you like to purchase the sports plan? (Y/N): " << endl;
            cin >> user_choice;
            if (user_choice == 'Y') {
                price += 9.99;
            }
			break;
		case 'C':
			price = 45.99;
            
			break;
		default:
			cout << "Invalid input, terminating the program" << endl;
			return 0;
    }




    cout << "The total price of your monthly package is $" << price << endl;

    // Exit the program:
    return 0;
}
