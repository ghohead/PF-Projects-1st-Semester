//Program To Determine Stage Of Life Via Entered Age

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()
{
	int a;
	cout << "\n\n\n\n\n\t---Program To Determine Stage Of Life Via Entered Age---"<<"\n\n\tEnter your age in years : ";
	cin >> a;
	cout << "\n";
	
	//Stage decidiing element
	if(a<0)
	{
		cout << "\tInvalid age. Your age can't be lesser than 0.";
	}
	else
	{
		if((a>0)&&(a<13))
		{
			cout << "\tYou're a child.";
		}
		else if((a>12)&&(a<20))
		{
			cout << "\tYou're a teenager.";
		}
		else if((a>19)&&(a<65))
		{
			cout << "\tYou're an adult.";
		}
		else
		{
			cout << "\tYou're a senior.";
		}
	}
	
	return 0;
}
