//Timothy Egans
//tbe13
//Lab 1 Extra Practice
//9/8/2023

#include <iostream>
#include <math.h>
using namespace std;

int depth;
float max_Pressure;
float tensile_Stregnth;
float required_Thickness;

int wall_legnth;
int wall_Height;
int outer_Rect_Leng;
int outer_Rect_Height;
int inner_Rect_Leng;
int inner_Rect_Height;
int outer_cir_Radius;
int inner_cir_Radius;

int main() {
	//Problem 1
	cout << "Please enter a max depth in meters: " << endl;
	cin >> depth;
	max_Pressure = 1000.0 * 9.81 * depth;
	cout << "Please enter a Tensile Stregnth: " << endl;
	cin >> tensile_Stregnth;
	required_Thickness = max_Pressure / tensile_Stregnth;
	cout << "The wall of the pool should be " << required_Thickness << " cm thick." << endl;
	

	//Problem 2
	cout << "Enter the legnth of the wall(in inches): " << endl;
	cin >> wall_legnth;
	cout << "Enter the height of the wall(in inches): " << endl;
	cin >> wall_Height;
	cout << "Enter the legnth of the outer border of a rectangular window (in inches):" << endl;
	cin >> outer_Rect_Leng;
	cout << "Enter the height of the outer border of a rectangular window (in inches):" << endl;
	cin >> outer_Rect_Height;
	cout << "Enter the legnth of the inner border of a rectangular window (in inches):" << endl;
	cin >> inner_Rect_Leng;
	cout <<  "Enter the height of the inner border of a rectangular window (in inches):" << endl;
	cin >> inner_Rect_Height;
	cout << "Enter the outer radius of a the circular window door (in inches): " << endl;
	cin >> outer_cir_Radius;
	cout << "Enter the inner radius of a the circular window door (in inches): " << endl;
	cin >> inner_cir_Radius;






	cout << "The cost of wrapping only the wall is  $" << endl;

	return 0;
}