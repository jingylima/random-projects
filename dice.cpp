#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "how many?";
	cin >> a;
	cin.ignore(1000,10);
	
	for(int i = 0; i < 5; i++)
	{
		cout << i;
	}
}