#include "people.h"
#include "birthday.h"
#include <iostream>
using namespace std;

people::people(string x, birthday n)
:name(x), date(n)
{
}

void people::printInfo()
{
    cout << name << " born on ";
    date.printDate();
}
