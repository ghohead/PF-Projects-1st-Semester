//This is a C++ program that takes two numbers from the user and prints their sum, product and difference.

//Preprocessor
#include<iostream>
using namespace std;

//Main
int main()

 //Body
 {
	int a, b, sum, sub, mult;
	cout<<"\n\tEnter 1st Number : ";
	cin>>a;
	cout<<"\n\tEnter 2nd Number : ";
	cin>>b;
	sum=a+b;
	sub=a-b;
	mult=a*b;
	cout<<"\n\n\tsum = "<<sum;
	cout<<"\n\n\tproduct = "<<mult;
	cout<<"\n\n\tdifference = "<<sub;	
	return 0;
 }
