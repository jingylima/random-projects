#include "people.h"
#include "birthday.h"
#include "people.cpp"
#include "birthday.cpp"
#include <iostream>
using namespace std;

int main()
{
    birthday one(8, 24, 2000);
    people me("jy", one);

    me.printInfo();
}

