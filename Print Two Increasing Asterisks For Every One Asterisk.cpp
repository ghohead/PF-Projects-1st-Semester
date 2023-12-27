#include<iostream>

using namespace std;

int main()

{
	
	int parentvar, childvar;
	parentvar = 0;
	
	while(parentvar!=5)
	{
		childvar=-1;
		cout<<"\n*\n";
		
		while(childvar!=parentvar)
		{
			cout<<"**";
			childvar++;
		
		}
		
		parentvar++;
		
		if(parentvar==3)
		{
			break;
		}
	
	}
	
	
	
	return 0;
	
}
