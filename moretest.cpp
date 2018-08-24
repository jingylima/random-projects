#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>
#include <cstdlib>
#include <ctime>

int row[6];//random numbers
int column[6];

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 6; i++)
		{
			row[i] = (1 + (rand() % 6));
			column[i] = (1 + (rand() % 6));
		}
		
	for (int i = 0; i < 6; i++)
		cout << row[i] << column[i] << " ";
}