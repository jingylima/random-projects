#include <iostream>
using namespace std;

struct student
{
	string name;
	string address;
	string city;
	string state;
	int zipcode;
	string gender;
	int idnumber;
	float gpa;
};

student info()
{
	student temp;
	
	cout << "name: ";
	getline(cin, temp.name);
	cout << "address: ";
	getline(cin, temp.address);
	cout << "city: ";
	getline(cin, temp.city);
	cout << "state: ";
	getline(cin, temp.state);
	cout << "zip code: ";
	cin >> temp.zipcode;
	cin.ignore(1000,10);
	cout << "gender: ";
	getline(cin, temp.gender);
	cout << "id number: ";
	cin >> temp.idnumber;
	cin.ignore(1000,10);
	cout << "gpa: ";
	cin >> temp.gpa;
	cin.ignore(1000,10);
	
	return temp;
}

void display(student x)
{
	cout << "name: " << x.name << "\n";
	cout << "address: " << x.address << "\n";
	cout << "city: " << x.city << "\n";
	cout << "state: " << x.state << "\n";
	cout << "zip code: " << x.zipcode << "\n";
	cout << "gender: " << x.gender << "\n";
	cout << "id number: " << x.idnumber << "\n";
	cout << "gpa: " << x.gpa << "\n";
}

int main()
{
	int m;
	cout << "how many students are there?";
	cin >> m;
	cin.ignore(1000,10);
	
	const int n = m;
	student a[n];
	
	cout << "input:\n";
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nstudent " << i + 1 << ":\n";
		a[i] = info();
	}
	
	cout << "output: \n";
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nstudent " << i + 1 << ":\n";
		display(a[i]);
	}
}