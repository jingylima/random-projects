#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

#include <windows.h>

int main() 
{
	srand(time(0));
	
	while(true)
	{
		int flips;
		int result;
		int h = 0;
		int t = 0;
		
		cout << "flip a coin! how many coin u wanna fleep!?\n";
		cin >> flips;
		cin.ignore(1000,10);
		
		if (flips < 0)
		{
			cout << "\naight mate, don't play funny. choose a better number.\n";
			continue;
		}
		
		cout << "\nokie dokes! here's ur flippies!\n";
		
		for(int x = 0;x < flips; x++)
		{
			cout << "flippin...";
			
			Sleep(500);
			
			result = (rand() % 2);
			if (result == 0)
			{
				cout << "heads!\n";
				h++;
			}
			else if (result == 1)
			{
				cout << "tails!\n";
				t++;
			}
			else
				cout << "hooh! that should not be a-happening!";
			
			Sleep(500);		
		}
		
		cout << "\nrighto! that was " << h << " heads and " << t << " tails!\n\n";
		cout << "wanna do the flippie-doos again? [Y/N]\n";
		
		string ans;
		cin >> ans;
		cin.ignore(1000,10);
		if (ans == "Y" || ans == "y")
			continue;
		else
			break;
	}
	
	cout << "\naight! buhbai!";
	return 0;
}