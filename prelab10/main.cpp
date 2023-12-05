// Timothy Egans, tbe13
// 11/06/2023
// Lab 10 Pre-Lab Assignment

// Write a function that subtracts each element in the array "myArray"
// with the variable "subtractMe".

#include <iostream>

using namespace std;

// TODO - Write your function prototype here
void Subtract(int arr[], int size, int subtractVal);

int main()
{
    const int SIZE = 8;
    int array [SIZE] = {16, 38, 93, 49, 14, 50, 5, 10};
    int subtractMe = 5;

    // TODO - Add your function call here
    Subtract(array, SIZE, subtractMe);

    // print the array
    for(int i=0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;

}

// TODO - Write your function definition here
void Subtract(int arr[], int size, int subtractVal){
    for (int i = 0; i < size; i++){
        arr[i] -= subtractVal;
    }
}