#include <iostream>
using namespace std;

void check()
{
	string pass; 
	
	for (int i = 2; i >= 0; i--)
	{
		cout << "enter password.\n";
		cin >> pass;
		cin.ignore(1000,10);
	
		if (pass == "abc123")
		{
			cout << "correct.\n\n";
			break;
		}
		else if (pass != "abc123" && i == 0)
		{
			cout << "program locked.\n";
			while(true)
			{
				cin >> pass;
			}
		}
		else
			cout << "incorrect. " << i << " tries remaining.\n";
	}	
}

void q(int n, double m)
{
	if (n > 0)
	{
		cout << "\n$" << m << " x" << n;
	}
}

int main()
{
	check();
	
	double given;
	double price;
	double x;
	double change;
	int hundred;
	int fifty;
	int twenty;
	int ten;
	int five;
	int one;
	double quarter;
	double dime;
	double nickel;
	double penny;
	
	while(true)
	{
	cout << "enter money given\n";
	cin >> given;
	cin.ignore(1000,10);
	cout << "\nenter total price\n";
	cin >> price;
	cin.ignore(1000,10);
	
	x = given - price;
	change = x;
	
	if(x % 0.01 == 0 && given > 0 && price > 0)
	{
		while(x > 0.01)
		{
			
		}
	}
	else 
	{
		cout << "invalid amount.\n\n";
		continue;
	}
	
	cout << "change of $" << change << " paid out in:\n";
	q(hundred, 100), q(fifty, 50), q(twenty, 20), q(ten, 10), q(five, 5), q(one, 1);
	cout << "\n\nanything else? [Y/N]\n";
	
	string ans;
	cin >> ans;
	cin.ignore(1000,10);
	
	if(ans == "Y" || ans == "y")
		cout << "\n";
	else 
		break;
}
cout << "\nhave a nice day!";
	return 0;
	
}