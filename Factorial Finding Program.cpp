#include <iostream>
using namespace std;
int main()
{
	
	int control, input, oginput;
	cout << "\n\n\n\n\n\n\n\n\tEnter the integer of which the factorial is to be determined : ";
	cin >> input;
	oginput = input;
	control = input;
	while(control!=1)
	{
		control--;
		input=input*control;	
	}
	cout << "\n\tFactorial of " << oginput << " = " << input ;
	return 0;
	
	
}
