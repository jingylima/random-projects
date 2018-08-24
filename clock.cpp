#include <iomanip>
#include <iostream>
using namespace std;

#include <windows.h>

int main()
{
	cout.fill('0');
	
	for (int hr=0; hr <24; hr++)
	{
		for (int min = 0; min <60; min++)
		{
			for (int sec = 0; sec <60; sec++)
			{
				cout << setw(2) << hr << ":";
				cout << setw(2) << min << ":";
				cout << setw(2) << sec;
				cout.flush();
				
				Sleep(1000);
				
				cout << "\r";
				
			}
		}	
	}		
}