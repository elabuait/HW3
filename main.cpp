#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1950, 21, 1);
    cout << p1.getFirstName() << " born on: " << p1.getBirthdate() << endl;

    Employee emp1("Alice", "Smith", 1985, 10, 20);
    emp1.setPositionTitle("Software Engineer");
    cout << emp1.getFirstName() << " works as: " << emp1.getPositionTitle() << endl;
    return 0;
}
