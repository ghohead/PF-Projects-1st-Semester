//PREPROCESSOR
#include <iostream>
using namespace std;

//MAIN
int main ()

{

//DECLARATION
float a, b, result;
int mode;

cout<<"-----MENU BASED CALCULATOR-----\n Enter 1 for sum.\n Enter 2 for subtraction.\n Enter 3 for multiplication. \n Enter 4 for division. \n Enter mode : ";
cin>>mode;

//INVALID MODE DETECTION
if((mode<1)||(mode>4))
{
cout<<" Invalid mode. Enter a mode between 1-4.";
}

//CALCULATION ELEMENT
else
{
cout<<" Enter 1st number: ";
cin>>a;
cout<<" Enter 2nd number: ";
cin>>b;
if(mode==1)
{
result=a+b;
cout<<" Result = "<<result;
}
else if(mode==2)
{
result=a-b;
cout<<"Result = "<<result;
}
else if(mode==3)
{
result=a*b;
cout<<"Result = "<<result;
}
else
{
result=a/b;
cout<<"Result = "<<result;
}
}

//RETURN
return 0;

}
