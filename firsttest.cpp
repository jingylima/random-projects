#include <iostream>
using namespace std;

int main()
{
	cout << "choose a positive number less than ten." << endl;
	while (true)
	{
		double number;
		cin >> number;
		cin.ignore(1000,10);
	if (number < 10 && number > 0 && ( (int) (number * 10) % 10) == 0)
	{cout << "aight." << endl;}
		cin.ignore(1000,10);
	if (( (int) (number * 10) % 10) != 0)
	{cout << "integers only, please." << endl;}
		cin.ignore(1000,10);
	if (number > 10)
	{	cout << "try again." << endl;}
		cin.ignore(1000,10);
	if (number == 10) 
	{cout << "nice try. but have another guess." << endl;}
		cin.ignore(1000,10);
	if (number <= 0)
		cin.clear();
				cin.ignore(1000,10);
	{cout << "a positive number, please." << endl;}

	
	if (number < 10 && number > 0 && ( (int) (number * 10) % 10) == 0) break;
	
	}
	cout << "that's all for now.";	
}