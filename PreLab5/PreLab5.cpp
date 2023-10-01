//Timothy Egans, tbe13

//10/1/2023

// Lab 5 Pre-Lab

// Finish the following program which adds up all odd integers from 1 to 
// the user's given number inclusively using a FOR loop. The total should be 
// assigned to the variable 'total'.

#include <iostream>
using namespace std;


int main()
{
    int number;
    int odd_sum;

    cout << "Enter a positive integer to find the summation of"
        << " all odd numbers from 1 to the given number." << endl;
    cin >> number;

    odd_sum = 0;

    for (int i = 1; i <= number; i += 2)
        {
		    odd_sum += i;
	    }

    cout << "Total : " << odd_sum << endl;

    return 0;
}