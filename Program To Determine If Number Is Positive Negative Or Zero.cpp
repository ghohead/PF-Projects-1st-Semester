//Program to determine if number is +ve, -ve or 0

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()
{
	int a;
	cout << "\n\n\n\t--Program to determine if number is +ve, -ve or 0--\n" << "\n\tEnter value : ";
	cin >> a;
	
	//Element to determine nature of number.	
	if(a>0)
	{
		cout << "\n\tPositive number.";
	}
	else if(a<0)
	{
		cout << "\n\tNegative number.";
	}
	else
	{
		cout << "\n\tNumber is 0.";
	}
	
	return 0;
}
