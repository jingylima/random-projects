#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	int number = 1 + (rand() % 100);
	
	const int MAX_GUESS = 100;
	int nGuess = 0;
	int guess[MAX_GUESS];
	
	cout << "i'm thinking of a number between 1 and 100. \ntry to guess what it is! \n";
	
	while (true)
	{
		int n;
		
		cin >> n;
		cin.ignore(1000,10);
		
		for (int i = 0; i < nGuess; i++)
			if (n == guess[i])
			{
				cout << "\nyou've already tried the number " << n << ".";
				break;
			}
		
		guess[nGuess++] = n;
		
		
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