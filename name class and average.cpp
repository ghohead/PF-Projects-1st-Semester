//Preprocessor
#include <iostream>
using namespace std;

//Main
int main() 

//Body Of Main
{
	//Variable declaration
	int marks1, marks2, marks3, classno;
	float avg;
	string name;
	//cout and cin
	cout<<"\n\n\n\tEnter marks obtained in quizzes out of 10 :\n\n\n";
	cout<<"\tEnter marks obtained in 1st quiz : ";
	cin>>marks1;
	cout<<"\n\tEnter marks obtained in 2nd quiz : ";
	cin>>marks2;
	cout<<"\n\tEnter marks obtained in 3rd quiz : ";
	cin>>marks3;
	cout<<"\n\tEnter Name : ";
	cin>>name;
	cout<<"\n\tEnter Class : ";
	cin>>classno;
	//Average Calculating Element
	avg=(marks1+marks2+marks3)/3;
	//cout and cin
	cout<<"\n\n\tName = " << name;
	cout<<"\n\n\tClass = " << classno ;
	cout<<"\n\n\tAverage = " << avg ;
	//return
	return 0;
}
