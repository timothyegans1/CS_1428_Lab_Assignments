//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 9
//Description: this program will compute the frequency of each unique number in an array
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int SIZE; //number of elements to be stored in an array
    //Prompt the user for an array size
    cout << "Enter the size of an array:" << endl;
    cin >> SIZE;

    int nums[SIZE], frequency[10] = {0};


    for(int i = 0; i < SIZE; i++)
    {
        // TODO: Populate array with random numbers
        nums[i] = rand() % 10 + 1;
    }

    cout << "\nNumbers in the array are: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    //TODO: Determine the frequency of each number
    for(int i = 0; i < SIZE; i++)
    {
        frequency[nums[i] - 1]++;
    }

    cout << "Frequency of each number:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i + 1 << " : " << frequency[i] << endl;
    }

    //TODO: Determine the index of the number with the highest frequency
    int maxFrequency = frequency[0];
    int index =0;
    for(int i = 1; i < 10; i++)
    {
        if(frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            index = i;
        }
    }

    cout << "Number with highest frequency : " << index + 1 << " occurred "
         << frequency[index] << " times" << endl;

    return 0;
}
