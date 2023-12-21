//This is a game type program in which you have to guess a number. (F2023065202)

//Headers
#include<iostream>
#include<cstdlib>
using namespace std;

//Main
int main()
{
	int userguess, guessnumber; //Initialization
	guessnumber = rand()%100 + 1; //Randomness factor
	cout << "\n\n\n\n\t------Guess The Hidden Number------";
	
	do //Looping element (will run until user guesses the number)
	{
		cout << "\n\n\tEnter your guess (1-100) : ";
		cin >> userguess;
		if((userguess<0)||(userguess>100)) //Ensures that the user is entering a number from 1-100.
		{
			cout << "\n\tInvalid guess. Enter a number between 1-100.";
		}
		else
		{
			if(userguess==guessnumber)
			{
				cout << "\n\tYou guessed the correct number!";
			}
			else if(userguess<guessnumber)
			{
				cout << "\n\tYour number is lower than the guess number.";
			}
			else
			{
				cout << "\n\tYour number is higher than the guess number.";
			}
		}
		
	}
	while(userguess!=guessnumber);
	
	return 0;
	
	
	
}
