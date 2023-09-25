// PreLab 4 Assignment
// Timothy Egans, tbe13
// 09/24/2023
// The following is an extremely scientific personality test that can predict
// how well you will do in this course.
// Fill in the area below with the requested code.

#include <iostream>

using namespace std;

int main()
{
    char input;
    string answer;

    cout << "Is Sponge Bob better than Patrick? ('Y' or 'N')" << endl;
    cin >> input;

    // TODO - Change the following IF-ELSE statement to an
    // equivalent switch statement.
    /*
    if (input == 'y' || input == 'Y')
    {
        cout << "You think Sponge Bob is better than Patrick..." << endl;
        answer = "Wrong!";
    }
    else if (input == 'n' || input == 'N')
    {
        cout << "You do not think think Sponge Bob is better than Patrick..." << endl;
        answer = "Correct!";
    }
    else
    {
        answer = "Invalid Input.";
    }

    cout << answer << endl;
    */

    const char userChoiceone = 'Y';
    const char userChoiceonepointfive = 'y';

    const char userChoicetwo = 'N';
    const char userChoicetwopointfive = 'n';



    switch (input) {
    case userChoiceone:
        cout << "You think Sponge Bob is better than Patrick..." << endl;
        answer = "Wrong!";
        break;
    case userChoiceonepointfive:
        cout << "You think Sponge Bob is better than Patrick..." << endl;
		answer = "Wrong!";
		break;
    case userChoicetwo:
        cout << "You do not think think Sponge Bob is better than Patrick..." << endl;
        answer = "Correct!";
        break;
    case userChoicetwopointfive:
        cout << "You do not think think Sponge Bob is better than Patrick..." << endl;
		answer = "Correct!";
		break;
    default:
        answer = "Invalid Input.";
        break;
    }
    cout << answer << endl;


    return 0;
}