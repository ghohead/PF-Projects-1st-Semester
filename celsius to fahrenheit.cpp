//Program to convert Celsius input into Fahrenheit

//Preprocessor
#include <iostream>
using namespace std;

//Main
int main() 

//Body of main

{
	float c, f;
	cout << "\n\n\n\tEnter temperature in Celsius : ";
	cin >> c;
	
	//Calculation element
	f = (1.8 * c) + 32;
	
	cout << "\n\tTemperature in Fahrenheit is : " << f << "\n\n\t";
	return 0;

}
