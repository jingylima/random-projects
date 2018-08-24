#include <iostream>
using namespace std;

bool mark(string ans)
{
	bool r = false;
	
	if (ans == "boi" || ans == "red" || ans == "two")
	{
		r = true;
		cout << "correct!\n";
	}
	else
		cout << "wrong.\n";
		
	return r;
}

int main()
{
	string name;
	string num;
	string col;
	int score = 0;
	
	cout << "what's my name?";
	cin >> name;
	if (mark(name))
		score++;
	
	cout << "number?";
	cin >> num;
	if (mark(num))
		score++;
	
	cout << "color?";
	cin >> col;
	if (mark(col))
		score++;
	
	cout << "you got " << score << " out of 3.";
}