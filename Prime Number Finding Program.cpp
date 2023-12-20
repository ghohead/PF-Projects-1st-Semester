#include <iostream>
using namespace std;
int main()
{
	int input, a, b;
	cout << "\n\n\n\n\n\n\tEnter a number : ";
	cin >> input;
	
	if((input==1)||(input==0))
	{
		cout << "\n\t1 and 0 aren't prime nor composite.";
	}
	else
	{
		a=input;
		while(a!=2)
		{
			
			a--;
			b=input%a;
			if(b==0)
			{
				cout << "\n\t" << input << " is a composite number.";
				return 0;
			}
			
		}
		cout << "\n\t" << input << " is a prime number.";
	}
	
	return 0;
}
