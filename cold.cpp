#include <iostream>
#include <string>
using namespace std;

void q(int a)
{
	switch (a)
	{
		case 1:
			cout << "once.";
			break;
		case 2:
			cout << "twice.";
			break;
		case 3: 
			cout << "three times.";
			break;
		case 4:
			cout << "four times!";
			break;
		case 5:
			cout << "...impossible! Five times!";
			break;
		default:
			break;
	}
}

int main()
{
	int i;
	int x;
	int temp[5];
	string day[5] = {"Monday:", "Tuesday:", "Wednesday:", "Thursday:", "Friday:"};
	
	for (i = 0; i < 5; i++)
	{
		cout << "Temperature for " << day[i] << "\n";
		cin >> temp[i];
		cin.ignore(1000,10);
	}
	
	cout << "Martinez, CA: Weather\n";
	
	for (i = 0; i < 5; i++)
	{
		cout << day[i] << " " << temp[i] << " degrees\n";
	}
	
	int hi = temp[0];
	int lo = temp[0];
	for (i = 0; i < 4; i++)
	{
		if (hi < temp[i + 1])	
			hi = temp[i + 1];
		
		if (lo > temp[i + 1])	
			lo = temp[i + 1];
	}
	
	int hnum = 0;
	int lnum = 0;
	for (i = 0; i < 5; i++)
	{
		if (hi == temp[i])
			hnum++;
		if (lo == temp[i])
			lnum++;
	}
	
	cout << "\nThe high is " << hi << " degrees, occurring " ;
	q(hnum);
	cout << "\nThe low is " << lo << " degrees, occurring " ;
	q(lnum);
	
}