#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	
	cout << "rock! paper! scissorssssssssssss!!!!!! \n";
	 
	double scorecomp = 0;
	double scoreme = 0;
	int choicecomp;
	string choiceme;
	
	while (true)
	{
		choicecomp = (rand() % 3);
		
		cout << "\nwhat do you pick? (rock, paper, scissors) \n(press 'n' to quit.)\n";
		getline(cin, choiceme);
		
		{
			if (choiceme == "rock" || choiceme == "paper" || choiceme == "scissors")
				cout << "\n";
			else if (choiceme == "n" || choiceme == "N")
				break;
			else
			{
				cout << "\nno! choose again! \n";
				continue;
			}
		}
		
		{
			if (choicecomp == 0)
				cout << "i choose rock!\n";
			else if (choicecomp == 1)
				cout << "i choose paper!\n";
			else
				cout << "i choose scissors!\n";
		}
		
		{
			if ((choiceme == "rock" && choicecomp == 0) || (choiceme == "paper" && choicecomp == 1) || (choiceme == "scissors" && choicecomp == 2))
			{
				cout << "\nit's a tie! half point each!\n";
				scorecomp = scorecomp + 0.5;
				scoreme = scoreme + 0.5;
			}
			else if ((choiceme == "rock" && choicecomp == 1) || (choiceme == "paper" && choicecomp == 2) || (choiceme == "scissors" && choicecomp == 0))
			{
				cout << "\nyou lose! point for me!\n";
				scorecomp = scorecomp + 1;
			}
			else 
			{
				cout << "\nyou win! point for you!\n";
				scoreme = scoreme + 1;
			}
		}
			
	}
	
	cout << "\nand the score is...\ncomputer:" << scorecomp << "\nyou:" << scoreme << "\n";
	
	{
		if (scorecomp > scoreme)
			cout << "i win!";
		else if (scoreme > scorecomp)
			cout << "aww. you win. congrats man.";
		else 
			cout << "draw! i want a rematch!";
	}
	return 0;
}