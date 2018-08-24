#include <iostream> 
using namespace std;

int main()
{
	while (true)
	{
		int count = 0;
		int x;
		count = count + 1;
		
		cout << count;
		
		cin >> x;
		cin.ignore(1000,10);
		
		if (x == 2) break;
		else 
			cout << count;
	
		
	}
}
