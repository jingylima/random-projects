#include <fstream>
#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	ifstream fin; //open file with song titles
	fin.open("songs.txt");
	if (!fin.good()) throw "I/O error";
	
	const int MAX_SONGS = 200;
	int nSongs = 0;
	string song[MAX_SONGS];
	
	while(fin.good())
	{
		getline(fin, song[nSongs++]);
	}
	
	string ans; // choice for y/n
	
	while(true)
	{
		cout << "wanna play a song? [Y/N]\n";
		getline(cin, ans);
		if (ans == "Y" || ans == "y")
		{
			int x = 1 + (rand() % nSongs);
			cout << song[x] << "\n\n";
		}
		else if (ans == "n" || ans == "N")
			break;
		else
			cout << "invalid response, try again.\n";
	}
	
	fin.close();
}
