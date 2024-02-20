/*
Programmer Name : Aliff Hakimi Bin Mohd Kamal
ID : AM2311015185
Section : 1
Date : 20/2/2024
*/

//Start of the Script 

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	//Declare of the variable
	float r, l, w, a;//r = radius, l = length, w = width, a = area
	
	//Declare of the constant variable
	const float PI = 3.142;
	
	//Category for Shape to Calculate
	int category_code;
	cout << "Choose a shape to calculate its area (1,2) :";
	cin >> category_code;
	
	if (category_code == 1) { //1.Circle Calculation
		cout << "Enter the radius of the circle: ";
		cin >> r;
	    a = PI * (r * r);

		cout << "Are of the circle is: " <<a;
	}
	
	else if (category_code == 2) { //2. Rectangle Calcuation
		cout << "Enter the length of the rectangle: ";
		cin >> l;
		cout << "Enter the width of the rectangle: ";
		cin  >> w;
		
		if ((l < 0 ||w < 0))
		cout << "Invalide input. Lenght and width cannot be negative." << endl;
		
	    else if (a > 0){
		a = l * w;
		cout << "Area of the rectangle is: " <<a;
	}
	}
	else
	cout << "Invalid choice. Please enter 1 or 2." <<endl;
	
	return 0;
}//end of the script

