#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	int number = 1 + (rand() % 100);
	
	int counter = 0;
	
	cout << "i'm thinking of a number between 1 and 100. \ntry to guess what it is! \n";
	
	while (true)
	{
		int guess;
		
		cin >> guess;
		cin.ignore(1000,10);
		
		counter = counter + 1;
		
		if (guess < 1 || guess > 100)
			cout << "\n...no.";
		if (guess < number)
			cout << "\ntoo small. try again. \n";
		if (guess > number)
			cout << "\ntoo big. have another go. \n";
		if (guess == 999)
			cout << number;
		if (guess == number)
		{
			cout << "\ngot it!" << endl;
			if (counter < 6)
				cout << "you only took " << counter << " tries! good job! \nbye now!";
			else 
				cout << "you took " << counter << " tries. good enough! \nbye now!";
			break;
		}		
	}

	return 0;
}