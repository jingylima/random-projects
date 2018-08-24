#include <iostream>
using namespace std;

#include <cmath>

int twice(double a, double b)
{
	int n = 0;
	double m = a;
	
	while (a < b)
	{
		a = a + (pow(2, n) * m);
		n++;
	}
	return n;
}

int main()
{
	double x;
	double y;
	
	cout << "initial allowance per week in dollars?\n";
	cin >> x;
	cin.ignore(1000,10);
	
	cout << "\ntarget total in dollars?\n";
	cin >> y;
	cin.ignore(1000,10);
	
	cout << "\nit will take " << twice(x, y) << " weeks to get $" << y;
}