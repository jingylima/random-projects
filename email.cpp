#include <algorithm>
#include <deque>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include <cctype>

class toUpper {public: char operator() (char c) const {return toupper(c);}};
class toLower {public: char operator() (char c) const {return tolower(c);}};

bool checkValidCharacter(string a)
{
	int i;
	bool validity = true;
	
	for (i = 0; i < a.length(); i++)
	{
		if (a[i] == '@')
			break;
	}
	
	if (a[i] != '@')//if there was no @ found
		return validity = false;
	
	for (int j = 0; j < i; j++)//check characters before the @
	{
		if ((a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z') || (a[j] >= '0' && a[j] <= '9') || a[j] == '_' || a[j] == '-' || a[j] == '.' || a[j] == '+')
			continue;
		else
			return validity = false;
	}
	
	if (a[i+1] == '.') //the character just after @ cannot be a period
		return validity = false;

	for (int j = a.length() - 1; j > i; j--)//check characters from the back, until @
	{
		if ((a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z') || (a[j] >= '0' && a[j] <= '9') || a[j] == '_' || a[j] == '-' || a[j] == '.' || a[j] == '+')
			continue;
		else
			return validity = false;
	}
	
	for (int j = a.length(); j > i+1; j--)//check if there is a period after @
	{
		validity = false;
		if (a[j] == '.')
		{
			validity = true;
			break;
		}
	}
	
	return validity;
}
 
int main()
{
	string inputFileName;
	string outputFileName;
	
	cout << "enter input filename in full (press enter for default): ";
	ifstream fin; //setting input file
	getline(cin, inputFileName);
	if (inputFileName.length() == 0)
		inputFileName = "fileContainingEmails.txt"; //default file
	fin.open(inputFileName.c_str());
	if (!fin.good()) throw "I/O error";
	
	cout << "enter output filename in full (press enter for default): ";
	ofstream fout; //setting output file
	getline(cin, outputFileName);
	if (outputFileName.length() == 0)
		outputFileName = "copyPasteMyEmails.txt"; // default file
	fout.open(outputFileName.c_str());
	if (!fout.good()) throw "I/O error";
	 
	deque<string> address;
	
	deque<string> invalid;//for counting valid and invalid addresses
	deque<string> valid;
	
	deque<string> lowerAddress; //for comparisons without changing original names
	
	string temp; //used to check before putting into array
	
	while (fin.good())
	{
		bool repeated = false;//used to check for repeated names
		
		getline(fin, temp); //put name from file into program
		
		string lctemp = temp;
		
		transform(lctemp.begin(), lctemp.end(), lctemp.begin(), toLower());//convert to lowercase for comparisons
		for (int i = 0; i < address.size(); i++)
			if (lctemp == lowerAddress[i])//if the name matches with an existing name, get the next name
				repeated = true;
		if (repeated == true)
			continue;
		
		address.push_back(temp);
		lowerAddress.push_back(lctemp);
	}
	
		for (int i = 0; i < address.size(); i++)
	{
		if (checkValidCharacter(address[i]) == true) 
		{			
			valid.push_back(address[i]);
			fout << address[i] << "; ";
		}
		else 
			invalid.push_back(address[i]);
	}
	
	if ((address.size() - invalid.size()) > 0)
	{
		cout << "\nthese " << address.size() - invalid.size() << " addresses have been copied to the file " << outputFileName << ": ";
		for (int i = 0; i < valid.size(); i++)
			cout << valid[i] << "; ";
		cout << "\n" << invalid.size() << " invalid email addresses were found: ";
		for (int i = 0; i < invalid.size(); i++)
			cout << invalid[i] << "; ";
	}
	else
		cout << "\nno valid emails were found in the input file " << inputFileName << ".";
	
	fin.close();
	fout.close();
	
}