#include <iostream>
using namespace std;
int main()

{
	int amount, even ,odd, ogamount;
	even=0;
	odd=1;
	cout << "\n\n\n\n\n\n\n\n\tEnter amount of even and odd numbers to print : ";
	cin >> amount;
	cout << "\n\n\n\tEven numbers : \n\t";
	
	ogamount=amount;
	
	while(amount!=0)
	{
		cout << even << "\n\t";
		even=even+2;
		amount--;
	}
	cout << "\n\tOdd numbers : \n\t";
	
	amount=ogamount;
	
	while(amount!=0)
	{
		cout << odd << "\n\t";
		odd=odd+2;
		amount--;
	}
}
