#include <iostream>
#include <iomanip>
using namespace std;


struct Soccer
{
	string name;
	double number;
	double points;
};

int main()
{
	Soccer array[12];
	int sum = 0;
	
	for(int x = 0; x < 12; x++ ) //Saves data and calculates the sum
	{
		cout << "What is the player's name?";
		
		getline(cin, array[x].name);
		
		cout << "What is the player's number?";
		cin >> array[x].number;
		while(array[x].number < 0)
		{
			cout << "The player's number cannot be less than 0\nPlease try again: ";
			cin >> array[x].number;
		}
		
		cout << "Number of points earned by the player: ";
		cin >> array[x].points;
		while(array[x].points < 0)
		{
			cout << "The player's points cannot be less than 0\nPlease try again: ";
			cin >> array[x].points;
		}
		
		sum = sum + array[x].points;
		cin.ignore(1000, 10);
	}
	
	int mostpoints = 0;
	
	for(int x = 1; x < 12; x++) //finds player with the highest score
	{
		if(array[x].points > array[mostpoints].points)
		{
			mostpoints = x;
		}
	}
	cout << "Total points earned by the team: ";
	cout << sum << endl;
	cout << "Highest Scorer (Name/ Number): ";
	cout << array[mostpoints].name << "/ " << array[mostpoints].number << endl;
	
	//displays table of information
	cout << left;
	cout << setw(5) << "Number";
	cout << setw(10) << "Name";
	cout << setw(10) << "Points";
	cout << setw(15) << "Highest Points";
	cout << endl;
	
	for(int x = 0; x < 12; x++)
	{
		cout << setw(5) << array[x].number;
		cout << setw(10) << array[x].name;
		cout << setw(10) << array[x].points;
		
		if(x == mostpoints)
		{
			cout << setw(15) << "Highest";
		}
		cout << endl;
	}
		
	
	
}