#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
	ifstream fin;
	fin.open("dist.txt");
	if (!fin.good()) throw "I/O error";
	
	double height;
	double distance;
	
	fin >> height;
	fin.ignore(1000,10);
	
	distance = sqrt(0.8 * (double)height);
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << "can be seen from " << distance << " miles away.";
}