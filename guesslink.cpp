#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

struct Attempt
{
	int guess;
	Attempt* next;
};

int main()
{
	srand(time(0));
	int number = 1 + (rand() % 100);
	
	Attempt* start = 0;
	int nGuess = 0;
	
	cout << "i'm thinking of a number between 1 and 100. \ntry to guess what it is! \n";
	
	while (true)
	{
		Attempt* anAttempt = new Attempt;
		Attempt* p;
		
		int n;
		cin >> anAttempt->guess;
		cin.ignore(1000,10);
		n = anAttempt->guess;
		
		for (p = start; p; p = p->next)
			if (n == p->guess)
			{
				cout << "\nyou've already tried the number " << n << ".";
				break;
			}
		
		anAttempt->next = start;
		start = anAttempt; // add the most recent guess to the list
		nGuess++; //counter increase by one
		
		
		if (n < 1 || n > 100)
			cout << "\n...no.";
		if (n < number)
			cout << "\ntoo small. try again. \n";
		if (n > number)
			cout << "\ntoo big. have another go. \n";
		if (n == 999)
			cout << number << endl;//cheat code for me
		if (n == number)
		{
			cout << "\ngot it!" << endl;
			if (nGuess < 6)
				cout << "you only took " << nGuess << " tries! good job! \nbye now!";
			else 
				cout << "you took " << nGuess << " tries. good enough! \nbye now!";
			break;
		}		
	}

	return 0;
}