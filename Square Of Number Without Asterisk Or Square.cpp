#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter number to be squared : ";
	cin>>a;
	c=a;
	while(a!=0){
		b=b+c;
		a--;
	}
	
	cout<<"\n\nSquare of "<< c << " = " << b;
	return 0;
}
