#include <deque>
#include <fstream>
#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	ifstream fin; //open file with song titles
	fin.open("songs.txt"); //NOTE: REQUIRES TEXT FILE WITH SONG NAMES NAMED "songs.txt"
	if (!fin.good()) throw "I/O error";

	const int MAX_SONGS = 200; //large limit
	int nSongs = 0;
	string song[MAX_SONGS]; //list of played songs to compare against 'recently played' list for duplicates
	deque<string> recent; //create changeable list to check for recent duplicates
	int recentcounter = 0;

	while(fin.good())
	{
		getline(fin, song[nSongs++]);
	}

	string ans; // choice for y/n

	while(true)
	{
		int x;

		cout << "wanna play a song? [Y/N]\n";
		getline(cin, ans);
		if (ans == "Y" || ans == "y")
		{
			while (true)
			{
				bool duplicate = false;//check if this has been selected recently
				x = (rand() % nSongs);//choose a random song from the list

				for (int i = 0; i < recent.size(); i++)
				{
					if (song[x] == recent[i])//comparing this song to any songs that have been recently plated
						duplicate = true;
				}

				if (duplicate == true)
					continue;
				else
					break;
			}

			recent.push_back(song[x]);//keep only the most recent 5
			if (recent.size() > 5)
				recent.pop_front();

			cout << song[x] << "\n\n";
		}
		else if (ans == "n" || ans == "N")
			break;
		else
			cout << "invalid response, try again.\n";//if user doesn't input y or n
	}

	fin.close();
}
