#include <iostream>
using namespace std;

int findLargest(int number[], int limit)
{
	int ans;
	for (int i = 0; i < limit; i++)
	{
		ans = (number[i] > number[0]) ? number[i] : number[0];
		number[0] = ans;
	}
	
	return ans;
}

int main()
{
	int size;
	
	
	cout << "how many numbers?";
	cin >> size;
	cin.ignore(1000,10);
	
	int num[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "what's for number " << 1 + i << "?";
		cin >> num[i];
	}
	
	cout << findLargest(num, size);
	
	
}