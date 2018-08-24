#include <iostream>
using namespace std;

int main()
{
	int o;
	double n;
	int s;
	cout << "how tall be the shape?\n";
	cin >> o;
	cin.ignore(1000,10);
	
	cout << "how many spaces you want? (80 = one line)\n";
	cin >> s;
	cin.ignore(1000,10);
	
	n = o / 2;	
	
	for (int i = 0; i < n; i++)
	{
		for (int x = n + s; x > i; x--)
			cout << " ";
		for (int j = 0; j <= (2 * i); j++)
			cout << "*";
		cout << "\n";
	}
	
	if (o % 2 != 0)
	{
		for (int x = 0; x < s; x++)
			cout << " ";
		for (int j = 0; j < o; j++)
			cout << "*";
		cout << "\n";
	}
	
	for (int i = n; i > 0; i--)
	{
		for (int x = i - s; x <= n; x++)
			cout << " ";
		for (int j = (2 * i) - 1; j > 0; j--)
			cout << "*";
		cout << "\n";
	}
}
