//Program to convert time in hours, minutes and seconds into seconds.

//Preprocessor
#include <iostream>
using namespace	 std;

//Main
int main()
 
//Body of main
 
 {
	int hours, minutes, seconds, outputseconds;
	cout << "\n\n\n\tEnter hours : ";
	cin >> hours ;	
	cout << "\n\tEnter minutes : ";
	cin >> minutes ;
	cout << "\n\tEnter seconds : ";
	cin >> seconds ;
	
	//Calculation Element
	outputseconds = (hours*60*60)+(minutes*60)+seconds;
	
	cout << "\n\t" << hours << " hours " << minutes << " minutes " << seconds << " seconds = " << outputseconds << " seconds\n\n"; 
	return 0;
}
