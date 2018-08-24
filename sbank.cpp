#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

struct mortgage
{
	double years;
	double deposit;
	double interest;
	double total;
};

int main()
{ 
 mortgage user;

 while (true)
 {
	 string pass;
	 cout << "enter password: ";
	 getline(cin, pass);
	 if (pass == "abc123") 
		 cout << endl << "correct." << endl;
	 else 
		 cout << endl << "incorrect." << endl << endl;
	 if (pass == "abc123") break;
 }
 while (true)
	{
	
	
	cout << "how much will you be depositing per month?" << endl;
	cin >> user.deposit;
	cin.ignore(1000,10);
	cout << endl << "how many years will you be doing this for?" << endl;
	cin >> user.years;
	cin.ignore(1000,10);
	cout << endl << "and what's the interest rate, in percent?" << endl;
	cin >> user.interest;
	cin.ignore(1000,10);
	
	double monthly = user.interest / 1200;
	double months = user.years * 12;
	
	user.total = user.deposit * ((pow((1 + monthly), months) - 1)/ monthly);
	
	cout << endl << "your total at the end of " << user.years << " years will be $"; 
	
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << user.total << endl << endl;
	
	cout << "would you like to check again? [Y/N]" << endl;
	char answer;
	cin >> answer;
	cin.ignore(1000,10);
	if (answer == 'n' || answer == 'N') break;
	else if (answer == 'y' || answer == 'Y')
		cout << endl << "right then..." << endl;
	else 
		cout << "invalid answer. type [Y/N] to continue." << endl;
	}

cout << endl << "come again soon!";
return 0;
}