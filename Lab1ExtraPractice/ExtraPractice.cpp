//Timothy Egans
//tbe13
//Lab 1 Extra Practice
//9/8/2023

#include <iostream>
#include math.h
using namespace std;

int depth;
float max_Pressure
float tensile_Stregnth;
float required_Thickness;

int main() {
	cout << "Please enter a max depth in meters: " endl;
	cin >> depth;
	max_Pressure = 1000.0 * 9.81 * depth;
	cout << "Please enter a Tensile Stregnth: "endl;
	cin >> tensile_Stregnth;
	required_Thickness = max_Pressure / tensile_Stregnth;
	cout << "The wall of the pool should be " << required_Thickness << " cm thick."endl;
	return 0;
}