#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("uncoded.txt");
	if (!fin.good()) throw "I/O error";
	
	ofstream fout;
	fout.open("coded.txt");
	if (!fout.good()) throw "I/O error";
	
	string s;
		
	while(fin.good())
	{
		getline(fin, s);
		
		for (int i = 0; i < s.length(); i++)
		{	
			s[i]++;
		}
		
		fout << s << endl;
		cout << s << endl;
	}
	
	fin.close();
	fout.close();
	return 0;
}