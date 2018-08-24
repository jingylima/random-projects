#include <deque>
#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	int number = 1 + (rand() % 100);
	
	deque<int> guesses;
	int nGuess = 0;
	
	cout << "i'm thinking of a number between 1 and 100. \ntry to guess what it is! \n";
	
	while (true)
	{
		
		int n;//n is the guessed number
		cin >> n;
		cin.ignore(1000,10);
		
		
		
		for (int i = 0; i < nGuess; i++)
			if (n == guesses[i])
			{
				cout << "\nyou've already tried the number " << n << ".";
				break;
			}
		
		guesses.push_back(n);
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