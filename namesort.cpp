#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include <cctype>

class toUpper {public: char operator() (char c) const {return toupper(c);}};
class toLower {public: char operator() (char c) const {return tolower(c);}};

int main()
{
	
	ifstream fin; //open file with names
	fin.open("names.txt");
	if (!fin.good()) throw "I/O error";
	
	const int MAX_NAMES  = 5; //only take the first five names from the file
	int nNames = 0;
	string name[MAX_NAMES];
	
	string lowername[MAX_NAMES]; //for comparisons without changing original names
	
	string temp; //used to check before putting into array
	
	while (fin.good())
	{
		bool repeated = false;//used to check for repeated names
		
		getline(fin, temp); //put name from file into program
		if (temp == "")
			continue;
		
		string lctemp = temp;
		
		transform(lctemp.begin(), lctemp.end(), lctemp.begin(), toLower());//convert to lowercase for comparisons
		for (int i = 0; i < MAX_NAMES; i++)
			if (lctemp == lowername[i])//if the name matches with an existing name, get the next name
				repeated = true;
		if (repeated == true)
			continue;
		
		if (nNames < MAX_NAMES)//adding the name and lowercase name to respective arrays if there is space
		{
			name[nNames] = temp;
			lowername[nNames++] = lctemp;
		}
		else
			break;
	}
	
	for (int i = 0; i < nNames; i++)
	{
		for (int j = i + 1; j < nNames; j++)
		{
			if (lowername[i] > lowername[j])
			{
				string x = lowername[i];
				lowername[i] = lowername[j];
				lowername[j] = x;
				x = name[i];
				name[i] = name[j];
				name[j] = x;
			}
		}
	}
	
	for (int i = 0; i < nNames; i++)
	{
		cout << name[i] << endl;
	}
}