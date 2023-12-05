//TO-DO: Timothy Egans, tbe13
//TO-DO: 11/06/23
//CS1428 Lab
//Lab 10
//Description: this program will find the longest sub-sequence in an array of letters.

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>
using namespace std;

void getInput(char letters[], const int SIZE);
char generateRandomLetter(int seed);
bool isSequence(char letters[], int ind1, int ind2);
void findSubsequence(char letters[], const int SIZE, int &startIndex, int &endIndex);
void printData(char letters[], const int SIZE, int startIndex, int endIndex);

void getInput(char letters[], const int SIZE)
{
    cout << "Please enter " << SIZE << " letters:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> letters[i];
    }
}

bool isSequence(char letters[], int ind1, int ind2)
{
    bool res = true;
    for(int i = ind1 + 1; i <= ind2; i++)
    {
        if((letters[i] - letters[i - 1] > 1) ||
           (letters[i] - letters[i - 1] < 0))
            res = false;
    }
    return res;
}



// TODO: Complete the function definitions
char generateRandomLetter(int seed) {
    // Simple pseudo-random letter generator
    return (seed % 26) + 'a';
}

void findSubsequence(char letters[], const int SIZE, int &startIndex, int &endIndex) {
    startIndex = 0;
    endIndex = 0;
    int currentStartIndex = 0;
    for(int i = 0; i < SIZE - 1; i++) {
        if(letters[i] + 1 == letters[i + 1]) {
            if(i - currentStartIndex > endIndex - startIndex) {
                startIndex = currentStartIndex;
                endIndex = i;
            }
        } else {
            currentStartIndex = i + 1;
        }
    }
    if(letters[SIZE - 2] + 1 == letters[SIZE - 1] && SIZE - 1 - currentStartIndex > endIndex - startIndex) {
        startIndex = currentStartIndex;
        endIndex = SIZE - 1;
    }
}

void printData(char letters[], const int SIZE, int startIndex, int endIndex) {
    cout << "The letters in the array are: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << setw(2) << letters[i];
    }
    cout << "\nThe longest sequence of letters following each other is: ";
    for(int i = startIndex; i <= endIndex; i++) {
        cout << letters[i];
    }
    cout << endl;
}

int main()
{
    const int SIZE = 5;
    char letters[SIZE + 5];
    int startIndex, endIndex;

    // TODO: Add function calls

    getInput(letters, 5); // We get 5 letters from the user and will append 5 pseudo-random letters
    findSubsequence(letters, SIZE, startIndex, endIndex);
    printData(letters, SIZE, startIndex, endIndex);

    return 0;
}

