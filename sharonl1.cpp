#include <iostream>
using namespace std;

struct Data
{
	double first;
	double second;
	double third;
	double fourth;
	double total;
	double average;
};

int main()
{
	Data array[4]; //Subscript 0-3= North, South, East, West
	
	for(int x = 0; x < 4; x++)
	{
		string a;
		if(x == 0)
		{
			a = "(North)";
		}
		else if(x == 1)
		{
			a = "(South)";
		}
		else if(x == 2)
		{
			a = "(East)";
		}
		else if(x == 3)
		{
			a = "(West)";
		}
		
		cout << a << " First-Quarter Sales: ";
		cin >> array[x].first;
		while(array[x].first < 0)
		{
			cout << "Numbers have to larger than 0, please try again: ";
			cin >> array[x].first;
		}
		
		cout << a << " Second-Quarter Sales: ";
		cin >> array[x].second;
		while(array[x].second < 0)
		{
			cout << "Numbers have to larger than 0, please try again: ";
			cin >> array[x].second;
		}
		
		cout << a << " Third-Quarter Sales: ";
		cin >> array[x].third;
		while(array[x].third < 0)
		{
			cout << "Numbers have to larger than 0, please try again: ";
			cin >> array[x].third;
		}
		
		cout << a << " Fourth-Quarter Sales: ";
		cin >> array[x].fourth;
		while(array[x].fourth < 0)
		{
			cout << "Numbers have to larger than 0, please try again: ";
			cin >> array[x].fourth;
		}
		
		array[x].total = array[x].first + array[x].second + array[x].third + array[x].fourth;
		array[x].average = (array[x].total / 4);
	}
	
	for(int x = 0; x < 4; x++)
	{
		string a;
		if(x == 0)
		{
			a = "(North)";
		}
		else if(x == 1)
		{
			a = "(South)";
		}
		else if(x == 2)																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						{
			a = "(East)";
		}
		else if(x == 3)
		{
			a = "(West)";
		}
		
		cout << a << "Total: " << array[x].total << "\n";
		cout << a << "Average: " << array[x].average << "\n";	
	}
	
}