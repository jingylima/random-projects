#include <iostream>
using namespace std;

int factor(int x, int y = 2)//just practicing
{
	if (x == y || x % y == 0)
		return y;
	else
		return factor(x, y+1);
}

int main()
{
	const int a = 100;
	int factors[a];

	int n;
	cin >> n;
	cin.ignore(1000,10);
	int count = 0;

	while(n > 1)
	{
		factors[count] = factor(n);
		n /= factors[count++];
	}

	for(int i = 0; i < count; i++)
		cout << factors[i] << " ";
}
