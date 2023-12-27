#include<iostream>

using namespace std;

int main()

{
	int odds, evens, repetitioncontroller, evenscontroller, oddscontroller;
	
	repetitioncontroller=0;
	
	while(repetitioncontroller!=5)
	{
		if(repetitioncontroller==4)
		{
			continue;
		}
		
		evenscontroller=0;
		oddscontroller=0;
		odds=1;
		evens=2;
		
		repetitioncontroller++;
		
		while(oddscontroller!=repetitioncontroller)
		{
			cout<<odds;
			odds=odds+2;
			oddscontroller++;
		}
		
		cout<<"\n";
		
		while(evenscontroller!=repetitioncontroller)
		{
			cout<<evens;
			evens=evens+2;
			evenscontroller++;
		}
		
		cout<<"\n";
				
	}
	
	return 0;
}
