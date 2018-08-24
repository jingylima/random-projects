#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

struct card
{
	int number;
	int suit;
};

void convert(int num, int suits)//converting a random number to text
{
	switch (num)
	{
		case 1:
			cout << "ace";
			break;
		case 11:
			cout << "jack";
			break;
		case 12:
			cout << "queen";
			break;
		case 13:
			cout << "king";
			break;
		default:
			cout << num;
			break;
	}
	
	switch (suits)
	{
		case 1:
			cout << " of spades";
			break;
		case 2:
			cout << " of hearts";
			break;
		case 3:
			cout << " of clubs";
			break;
		case 4:
			cout << " of diamonds";
			break;
	}
}

int main()
{
	srand(time(0));
	
	int compscore = 0;
	int humanscore = 0;
	string ans;
	
	while(true)
	{
		card comp;
		card human;
		
		comp.number = (1 +(rand() % 13));
		comp.suit = (1 +(rand() % 4));
		
		human.number = (1 +(rand() % 13));
		human.suit = (1 +(rand() % 4));
		
		cout << "\nthe computer has a ";
		convert(comp.number, comp.suit);
		cout << "!\n";
		cout << "you got the ";
		convert(human.number, human.suit);
		cout << "!\n";
		
		if (comp.number > human.number)
		{
			cout << "computer wins!\n";
			compscore++;
		}
		else if (human.number > comp.number)
		{
			cout << "human wins!\n";
			humanscore++;
		}
		else
			cout << "it's a tie! we don't count suits.\n";
		
		cout << "again? [Y/N]\n";
		while (true)
		{
			getline(cin, ans);
			if (ans == "Y" || ans == "y" || ans == "N" || ans == "n")
				break;
			else 
				cout << "invalid answer, try again.\n";
		}
		
		if (ans == "N" || ans == "n")
			break;
	}
	
	cout << "score: comp-" << compscore << " human-" << humanscore;
}