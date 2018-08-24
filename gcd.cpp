#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	if (b % a == 0)
		return a;
	else
		return gcd(a, b%a);
}


int main()
{
	int x;
	int y;
	cin >> x >> y;
	cout << gcd(x,y);
}