#include <iostream>
#include <string>
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

void q(int n, string m)
{
	if (n > 0)
	{
		cout << "\n" << m << " x" << n;
	}
}

int main()
{
	check();
	
	double given;
	double price;
	double x;
	double change;
	int y;
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
	y = x * 100;
	
	if(x >= 0.01 && given > 0 && price > 0 && given < 10000)
	{
		hundred = y / 10000;
		y = y % 10000;
		fifty = y / 5000;
		y = y % 5000;
		twenty = y / 2000;
		y = y % 2000;
		ten = y / 1000;
		y = y % 1000;
		five = y / 500;
		y = y % 500;
		one = y / 100;
		y = y % 100;
		quarter = y / 25;
		y = y % 25;
		dime = y / 10;
		y = y % 10;
		nickel = y / 5;
		y = y % 5;
		penny = y;
	}
	else 
	{
		cout << "invalid amount.\n\n";
		continue;
	}
	
	cout << "change of $" << change << " paid out in:\n";
	q(hundred, "$100"), q(fifty, "$50"), q(twenty, "$20"), q(ten, "$10"), q(five, "$5"), q(one, "$1"), q(quarter, "quarter"), q(dime, "dime"), q(nickel, "nickel"), q(penny, "penny");
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