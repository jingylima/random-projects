#include <iostream>
#include <windows.h>
using namespace std;

void startGame(string fileName)
{
	ShellExecute(NULL,"open",fileName.c_str(),NULL,NULL,SW_SHOWNORMAL);
}

int main()
{
	string file;
	int choice;
	while(true)
	{
		cout << "what would you like to do?\n";
		cout << "1. flip a coin\n2. guess a number\n3. rock paper scissors\n4. cards\n5. battleship\n6. exit";
		
		cin >> choice;
		cin.ignore(1000,10);
		switch(choice)
		{
			case 1:
			file = "c:\\cpp\\coin.exe";
			break;
			case 2:
			file = "c:\\cpp\\guess.exe";
			break;
			case 3:
			file = "c:\\cpp\\rps.exe";
			break;
			case 4: 
			file = "c:\\cpp\\cards.exe";
			break;
			case 5:
			file = "c:\\cpp\\battleship.exe";
			break;
			case 6:
			return 0;
			default: 
			cout << "invalid, try again.\n";
			continue;
		}
		
		startGame(file);
		system("pause");
	}
	return 0;
	
	
}