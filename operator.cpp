#include <iostream>
using namespace std;

int operator+ (string a, string b)
{
    int sum;
    sum = a.length() + b.length();
    return sum;
}

int main()
{
    string x = "happy";
    string y = "birth";

    cout << x+y;
}
