# include <iostream>
using namespace std;

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}

int main()
{
	double a;
	double b;
	char o;
	double ans;
	char yn;
	
	while (true)
	{
		cout << "first number: ";
		cin >> a;
		cin.ignore(1000,10);
		cout << "operation: ";
		cin >> o;
		cin.ignore(1000,10);
		cout << "second number: ";
		cin >> b;
		cin.ignore(1000,10);
		
		if ((b == 0 && o == '/') || (o != '+' && o != '-' && o != '*' && o != '/'))
		{
			cout << "\ninvalid operation, try again.\n";
			continue;
		}
		
		switch (o)
		{
			case '+':
			ans = add(a, b);
			break;
			case '-':
			ans = subtract(a,b);
			break;
			case '*':
			ans = multiply(a,b);
			break;
			case '/':
			ans = divide(a,b);
			break;
		}
		
		cout << "\nyour answer is: " << ans;
		
		cout << "\nwould you like to check again? [Y/N]" << endl;
		cin >> yn;
		cin.ignore(1000,10);
		if (yn == 'n' || yn == 'N') break;
		else if (yn == 'y' || yn == 'Y')
			cout << endl << "right then..." << endl;
		else	 
			cout << "invalid answer. type [Y/N] to continue." << endl;
	}
	return 0;
}