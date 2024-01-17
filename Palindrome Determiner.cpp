#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d;
	a=b=c=0;
	
	cout<<"Enter a number : ";
	cin>>a;
	d=a;
	
	while(a!=0){
	b=a%10;
	a=a/10;
	c=(c*10)+b;
	}
	
	if(c==d){
		cout<<"\nNumber is a palindrome.";
	}
	else{
		cout<<"\nNumber is not a palindrome.";
	}
}
