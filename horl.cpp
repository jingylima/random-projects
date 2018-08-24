#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib> 
#include <ctime>

int main()
{
	srand(time(0));
	
	cout << "hi there!" << endl << "would you like to draw a card? [Y/N]" << endl;
	string yes;
	if (yes == "N" || yes == "n")
		cout << endl << endl << "um. wrong answer." << endl;
	else 
		cout << endl << endl << "ok!";
	cout << "let's begin!";
	
	
	
}