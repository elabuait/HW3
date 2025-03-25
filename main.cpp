#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    return 0;
}
