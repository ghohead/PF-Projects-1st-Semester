#include <iostream>
using namespace std;
int main(){
	
	
	int input, square;
	char control;
	control = 'b';
	
	while(control!='a')
	{
	
	cout << "\n\n\n\n\n\tEnter 'a' to end loop, enter any other character to square number : ";
	cin >> control ;
	
	if(control!='a')
		{
	 		cout << "\n\tEnter Number to be Squared : ";
			cin >> input ;
			square = input*input;
			cout << "\n\tSquare of " << input << " = " << square ;
			
		}

	
	}
	
	
return 0;	
	
}

