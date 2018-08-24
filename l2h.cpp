#include <iostream>
using namespace std;

void sorter(int a, int b, int c)
{
	int temp;
	
	if (b < a)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	if (c < a)
	{
		temp = a;
		a = c;
		c = temp;
	}
	
	if (c < b)
	{
		temp = b;
		b = c;
		c = temp;
	}
	return (a, b, c)
}

int main()
{
	int x;
	int y;
	int z;
	
	cin >> x >> y >> z;
	cin.ignore(1000,10);
	
	sorter(x, y, z);
	cout << x << y << z;
}