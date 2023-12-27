#include<iostream>

using namespace std;

int main()

{
	int parentvar, childvar;
	parentvar = 0;
	
	while(parentvar!=5)
	{
		childvar=-1;
		
		while(childvar!=parentvar)
		{
			cout<<"*";
			childvar++;
		}
		
		cout<<"\n";
		parentvar++;
	}
	
	return 0;
	
}
