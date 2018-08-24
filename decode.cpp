#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("coded.txt");
	if (!fin.good()) throw "I/O error";
	
	ofstream fout;
	fout.open("decoded.txt");
	if (!fout.good()) throw "I/O error";
	
	const int n = 5;
	int change[n] = {3, 16, -6, -8, -5};
	string s;
	
	while (fin.good())
	{
		getline(fin, s);
		for (int i = 0; i < s.length(); i++)
		{
			s[i] -= change[i % n];
		}
		
		fout << s << endl;
		cout << s << endl;
	}
	
	fout.close();
	fin.close();
	
}