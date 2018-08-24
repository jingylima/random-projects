#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("new1.txt");
	if (!fin.good()) throw "I/O error";
	
	string s;
	
	getline(fin, s);
	
	cout << s;
	
	fin.close();
	
	
}