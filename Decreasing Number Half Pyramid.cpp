#include<iostream>

using namespace std;

int main()

{
	int parentvar, childvar;
	parentvar = 5;
	
	while(parentvar!=0)
	{
		childvar=0;
		
		while(childvar!=parentvar)
		{
			childvar++;
			cout<<childvar;
			
		}
		
		cout<<"\n";
		parentvar--;
	}
	
	return 0;
	
}
