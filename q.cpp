#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>


bool question(int a, int b)
{
	bool r = false;
	int ans;
	cout << "what is " << a << " plus " << b << "?\n";
	
	cin >> ans;
	cin.ignore(1000,10);
	
	if (ans == a + b) 
	{
		cout << "correct.\n";
		r = true;
	} 
	else
		cout << "fucking noob ass piece of shit.\n";
	
	return r;
}

int main ()
{
	srand(time(0));
	
	int num;
	int score = 0;
	cout << "how many questions you want?\n";
	cin >> num;
	cin.ignore(1000,10);
	
	for (int i = 0; i < num; i++)
	{
		if (question(rand() % 10, rand() % 10))
			score++;
		
		if (i == num - 1)
		{
			cout << "your score is " << score << " out of " << num;
			break;
		}
	}
}