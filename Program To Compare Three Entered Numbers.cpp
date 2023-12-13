//Program to compare three entered numbers

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()
{
	
	int a,b,c;
	cout << "\n\n\n\n\n\n\n\tEnter value for 1st integer : ";
	cin >> a;
	cout << "\n\tEnter value for 2nd integer : ";
	cin >> b;
	cout << "\n\tEnter value for 3rd integer : ";
	cin >> c;
	
	//Comparison element
	if((a>b)&&(a>c))
	{
		cout << "\n\tThe greatest number is "  << a ;
	}
	
	else if((b>a)&&(b>c))
	{
		cout << "\n\tThe greatest number is "  << b ;
	}
	
	else if((c>b)&&(c>a))
	{
		cout << "\n\tThe greatest number is " << c ;
	}
	
	else if((a==b)&&(a==c))
	{
		cout << "\n\t" << a << ", " << b << " and " << c << " are equal";
	}
	
	
	else if(a==b)
	{
		cout << "\n\t" << a << " and " << b << " are equal";
	}
	
	else if(b==c)
	{
		cout << "\n\t" << c << " and " << b << " are equal";
	}
	
	else if(c==a)
	{
		cout << "\n\t" << a << " and " << c << " are equal";
	}
	
	return 0;

}

