#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
	string name;
	int idnum;
	double* tests;
	double average;
	char grade;
};

int main()
{
	int numt; //number of tests
	int nums; //number of students
	cout << "How many tests are there?\n";
	cin >> numt;
	cout << "How many students are there?\n";
	cin >> nums;
	
	Student* array = new Student[nums];
	
	for(int x = 0; x < nums; x++)
	{
		array[x].tests = new double[numt];
	}

	for(int x = 0; x < nums; x++)
	{
		cout << "------------------------------------------\n";
		cout << "What is the name of student " << (x + 1) << " ?\n";
		cin.ignore(1000, 10);
		getline(cin, array[x].name);
		cout << "What is " << array[x].name << "'s ID number?\n";
		cin >> array[x].idnum;
		
		double sum = 0;
		for(int y = 0; y < numt; y++)
		{
			cout << "Test Score " << (y + 1) << ": ";
			cin >> array[x].tests[y];
			while(array[x].tests[y] < 0)
			{
				cout << "Numbers have to be above 0, please try again: ";
				cin >> array[x].tests[y];
			}
			sum = sum + array[x].tests[y];
		}
		
		array[x].average = (sum / numt);
		
		//Determine grade based on average
		if(array[x].average >= 90)
			array[x].grade = 'A';
		else if(array[x].average >= 80)
			array[x].grade = 'B';
		else if(array[x].average >= 70)
			array[x].grade = 'C';
		else if(array[x].average >= 60)
			array[x].grade = 'D';
		else 
			array[x].grade = 'F';
	}
	
	//Information table headers
	cout << "------------------------------------------\n";
	cout << left;
	cout << setw(10) << "NAME    ";
	cout << setw(15) << "|ID NUMBER ";
	cout << setw(10) << "|AVERAGE ";
	cout << setw(3) << "|GRADE" << "|";
	cout << "\n------------------------------------------\n";
	
	//Information of students under the headers
	for(int x = 0; x < nums; x++)
	{
		cout << setw(10) << array[x].name << "|";
		cout << setw(14) << array[x].idnum << "|";
		cout << setw(9) << fixed << setprecision(1) << array[x].average << "|";
		cout << setw(5) << array[x].grade << "|" << endl;
		cout << "------------------------------------------\n";
		
	}
	
	
	for(int x = 0; x < nums; x++)
	{
		delete array[x].tests;
	}
	
	delete [] array;
	
}
//create struct containing name, idnum, tests, average and grade
//the data type of the tests in the struct has to be a dynamic allocated array
//create a dynamic allocated array containing the struct
//ask user how many students there are and how many tests there are
//for loop: ask for id number name test scores// in the same loop, calculate average 
// create if statements for the grades
//display name, number, average and grade