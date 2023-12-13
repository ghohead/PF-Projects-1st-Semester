//Simple calculator using switch statement

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()
{
	int a , b , mode , result ;
	cout << "\n\n\n\n\n\n\n\tEnter 1 for sum \n\n\tEnter 2 for subtraction \n\n\tEnter 3 for multiplication \n\n\tEnter 4 for division \n\n\tEnter mode: ";
	cin >> mode;
	cout << "\n\tEnter 1st integer : ";
	cin >> a;
	cout << "\n\tEnter 2nd integer : ";
	cin >> b;
	
	//Calculating element
	switch (mode)
	{
		case 1:
			result=a+b;
			cout << "\n\tResult = " << result;
			break;
		
		case 2:
			result=a-b;
			cout << "\n\tResult = " << result;
			break;
			
		case 3:
			result=a*b;
			cout << "\n\tResult = " << result;
			break;
			
		case 4:
			result=a/b;
			cout << "\n\tResult = " << result;
			break;
	}
	
	return 0;
}
