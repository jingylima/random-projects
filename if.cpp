#include <string>
#include <iostream>
using namespace std;

int main ()
{
	string a = "i laike milk.";
	string b;
	cout << "type '" << a << "'" << endl;
	while (true)
		{
		getline(cin ,b);
			
		if (b == "x" || b == "X") 
			cout << endl << "fine. ";
		
		if (b == a || b == "x" || b == "X") break;
		
		if (b == a)
			cout << endl << "good job!" << endl;
		else
			{
				cout << endl << "WRONG!!!" << endl;
				if (b == "i laike milk")
				{
					cout << "ahem." << endl << "forgot the dot." << endl;
				}
				cout << "Press X to give up." << endl;
			}		
		}
	cout << "bye now.";
}