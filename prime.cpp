#include <iostream>
using namespace std;

int prime(int x, int y)
{
	if (y == 1)
		return 0;
	else if (x % y == 0)
		return y;
	else
		return prime(x, y-1);
}

int main()
{
	int a;
	int b;
	cin >> a;
	b = a - 1;
	if (prime(a, b) == 0)
		cout << "prime!";
	else
		cout << "divides by " << prime(a, b);
}