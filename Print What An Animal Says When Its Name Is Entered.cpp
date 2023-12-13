//Program to print what an animal says when respective number is entered

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()
{
	int animal;
	cout << "\n\n\n\n\n\n\n\tEnter 1 for cow \n\n\tEnter 2 for cat \n\n\tEnter 3 for horse \n\n\tEnter 4 for dog \n\n\tEnter number for animal: ";
	cin >> animal;
	
	//Animal deciding and noise printing element
	switch (animal)
	{
		case 1:
			cout << "\n\tMoo!";
			break;
		
		case 2:
			cout << "\n\tMeow!";
			break;
			
		case 3:
			cout << "\n\tNeigh!";
			break;
			
		case 4:
			cout << "\n\tWoof!";
			break;
	}
	
	return 0;
}
