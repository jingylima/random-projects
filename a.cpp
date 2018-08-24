#include <iostream>
using namespace std;

int main()
{
	cout << "choose a positive integer less than ten." << endl;
	while (true)
	{
		double number;
		cin >> number;
		
		if (number < 10 && number > 0 && ( (int) (number * 10) % 10) == 0)
		{cout << "aight." << endl;}
		
		if (( (int) (number * 10) % 10) != 0)
		{cout << "integers only, please." << endl;}
		
		if (number > 10)
		{cout << "try again." << endl;}
		
		if (number == 10) 
		{cout << "nice try. but have another guess." << endl;}
		
		if (number <= 0)
		{cout << "a positive number, please." << endl;}
		
		cin.clear();
		cin.ignore(1000,10);
	
		if (number < 10 && number > 0 && ( (int) (number * 10) % 10) == 0) break;
	
	}
	cout << "that's all for now.";	
}