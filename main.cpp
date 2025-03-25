#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1950, 21, 1);
    cout << p1.getFirstName() << " born on: " << p1.getBirthdate() << endl;

    return 0;
}
