#include <iomanip>
#include <iostream>
using namespace std;

#include <windows.h>

int main()
{
	cout.fill('0');
	
	for (int n = 10; n >= 0; n--)
	{
		cout << setw(2) << n << "\r";
		Sleep (1000);
	}
	cout << "woop-de-doop!";
	return 0;
}