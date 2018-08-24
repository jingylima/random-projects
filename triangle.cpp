#include <iostream>
using namespace std;

int triangle(int n)
{
	if (n == 1)
		return 1;
	else
		return n + triangle(n - 1);
}

int main()
{
	int x;
	cin >> x;
	cout << triangle(x);
}