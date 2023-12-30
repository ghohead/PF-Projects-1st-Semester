#include<iostream>

using namespace std;

int main()

{
	int parentvar, childvar;
	parentvar = 0;
	
	while(parentvar!=6)
	{
		childvar=-1;
		
		while(childvar!=parentvar)
		{
			cout<<"*";
			if(parentvar%2==0)
			{
			    break;
			}
			childvar++;
		}
		
		cout<<"\n";
		parentvar++;
	}
	
	return 0;
	
}
