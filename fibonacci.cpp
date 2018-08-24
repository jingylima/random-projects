#include <iostream>
using namespace std;



int fib(int n)
{
	 if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
	int x;
	cin >> x;
	cin.ignore(1000,10);
	cout << fib(x);
}