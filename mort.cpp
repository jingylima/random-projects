#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{ 
 ofstream fout;
	fout.open("savings.txt", ios::app);
	if (!fout.good()) throw "I/O error";
	
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
	
	double years;
	double deposit;
	double interest;
	
	cout << "how much will you be depositing per month?" << endl;
	fout << "how much will you be depositing per month?" << endl;
	cin >> deposit;
	cin.ignore(1000,10);
	fout << deposit << endl;
	cout << endl << "how many years will you be doing this for?" << endl;
	fout << "how many years will you be doing this for?" << endl;
	cin >> years;
	cin.ignore(1000,10);
	fout << years << endl;
	cout << endl << "and what's the interest rate, in percent?" << endl;
	fout << "and what's the interest rate, in percent?" << endl;
	cin >> interest;
	cin.ignore(1000,10);
	fout << interest << endl;
	
	double monthly = interest / 1200;
	double months = years * 12;
	
	double total = deposit * ((pow((1 + monthly), months) - 1)/ monthly);
	
	cout << endl << "your total at the end of " << years << " years will be $"; 
	fout << "your total at the end of " << years << " years will be $";
	
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << total << endl << endl;
	fout.setf(ios::fixed|ios::showpoint);
	fout << setprecision(2);
	fout << total << endl;
	
	cout << "would you like to check again? [Y/N]" << endl;
	char answer;
	cin >> answer;
	cin.ignore(1000,10);
	
	fout << endl;
	fout.close();
	
	if (answer == 'n' || answer == 'N') break;
	else if (answer == 'y' || answer == 'Y')
		cout << endl << "right then..." << endl;
	else 
		cout << "invalid answer. type [Y/N] to continue." << endl;
}

cout << endl << "come again soon!";

return 0;
}