//Timothy Egans, tbe13
//11/15/23
//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>


using namespace std;

struct Cat
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
    // TODO - Create a Cat object named "cat1", and initialize its name to
    //        "Cheddar", gender to 'F', age to 5, and breed to "Persian".
    Cat cat1;
    cat1.name = "Cheddar";
    cat1.gender = 'F';
    cat1.age = 5;
    cat1.breed = "Persian";

    // TODO - Create a Cat object named "cat2".
    Cat cat2;

    // TODO - Prompt the user to enter the cat's name, age, gender, and breed,
    //        and assign them to the "cat2" object.
    //        Assume the cat name and breed are entered as a single word
    //        so that both will work with cin statements.
    cout << "Enter the second cat's name: ";
    cin >> cat2.name;
    cout << "Enter the second cat's age: ";
    cin >> cat2.age;
    cout << "Enter the second cat's gender: ";
    cin >> cat2.gender;
    cout << "Enter the second cat's breed: " << endl;
    cin >> cat2.breed;

    // TODO - Print "cat1" and "cat2" objects to the console. E.g.
    //        "Name: Cheddar, Gender: F, Age: 5, Breed: Persian"
    cout << "Name: " << cat1.name << ", Gender: " << cat1.gender << ", Age: " << cat1.age << ", Breed: " << cat1.breed << endl;
    cout << "Name: " << cat2.name << ", Gender: " << cat2.gender << ", Age: " << cat2.age << ", Breed: " << cat2.breed << endl;

    return 0;
}