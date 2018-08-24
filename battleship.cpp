#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

char board[6][6];
int row[6];//random numbers
int column[6];
int remaining;

void resetBoard()
{
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			board[i][j] = 'O';
		}
	}
}

void displayBoard()
{
	cout << "   0  1  2  3  4  5\n\n";
	for(int i = 0; i < 6; i++)
	{
		cout << i << "  ";
		for(int j = 0; j < 6; j++)
		{
			cout << board[i][j] << "  ";
		}
		cout << "\n\n";
	}
}

bool checkGuess(int x, int y)
{
	bool checkRow = false;
	bool checkColumn = false;
	
	for(int i = 0; i < 6; i++)//check row
	{
		if (row[i] == x)
		{
			checkRow = true;
		}
	}
	
	for(int i = 0; i < 6; i++)//check column
	{
		if (column[i] == y)
		{
			checkColumn = true;
		}
	}
	
	if(checkRow == true && checkColumn == true)
		return true;
	else 
		return false;
}

int main()
{
	srand(time(NULL));
	while(true)
	{
		resetBoard();
		remaining = 6; //reset score
		
		int choiceRow;
		int choiceColumn;
		
		for (int i = 0; i < 6; i++)
		{
			row[i] = rand() % 6;
			column[i] = rand() % 6;
		}
		
		
		while(remaining > 0)
		{
			displayBoard();
			cout << "choose your row!\n";
			cin >> choiceRow;
			cin.ignore(1000,10);
			
			if (choiceRow == 99)
			{
				for (int i = 0; i < 6; i++)
					cout << row[i] << column[i];
				
				continue;
			}
			
			cout << "choose your column!\n";
			cin >> choiceColumn;
			cin.ignore(1000,10);
			
			if (checkGuess(choiceRow, choiceColumn) == true)
			{
				cout << "it's a hit!\n";
				board[choiceRow][choiceColumn] = 'X';
				remaining--;
			}
			else
				cout << "it's a miss!\n";
			
			cout << remaining << " remaining\n";
			cout.flush();
		}
		
		
		break;
	}
}