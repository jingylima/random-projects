#include <iostream>
using namespace std;


int main()
{
	int x;
	cout << "how many scores?\n";
	cin >> x;	
	
	double* score = new double[x];
	double total = 0;
	double avg = 0;
	int nbig = 0;
	int nA = 0;
	
	for (int i = 0; i < x; i++)
	{
		cout << "input score " << i + 1 << ":\n";
		cin >> score[i];
		cin.ignore(1000,10);
		total += score[i];
	}
	
	avg = total / x;
	
	double hi = score[0];
	double lo = score[0];
	
	for (int i = 0; i < x; i++)
	{
		if (score[i] > avg)
			nbig++;
		if (score[i] >= 80)
			nA++;
		if (hi < score[i])	
			hi = score[i];
		if (lo > score[i])	
			lo = score[i];
	}
	
	cout << "average: " << avg << "\n" << nbig << " scores are above average.\n";
	cout << "there were " << nA << " A grades.\n";
	cout << "the maximum was " << hi << " and the minimum was " << lo << ".\n";
	
	cout << "from lowest to highest, the scores were ";
	for (int i = 0; i < x; i++)
	{
		for (int j = i + 1; j < x; j++)
			if (score[i] > score[j])
			{
				int temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
	}
	
	for (int i = 0; i < x; i++)
		cout << score[i] << " ";
}
