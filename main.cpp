#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main()
{
/*************************************************************************
** Author : Elias Abueita
** Program : hw3, q1
** Date Created : March 23, 2025
** Date Last Modified : March 25, 2025
** Usage : No command line arguments
**
** Problem:
Demonstrates the use of inheritance using these Classes: PErson, Employee, Student, and GradStudent
*************************************************************************/
    Person p1("Tony", "Stark", 1950, 21, 1);
    cout << p1.getFirstName() << " " << p1.getLastName() << " is born on this date: " << p1.getBirthdate() << endl;

    Employee e1("Elias", "Abueita", "AI Engineer", 1997, 23, 6);
    cout << e1.getFirstName() << " " << e1.getLastName()<< " is a(n) " << e1.getPositionTitle() << " born on " << e1.getBirthdate() << endl;

    Student s1("Elias", "Abueita", 35, 1997, 23, 06);
    cout << s1.getFirstName() << " " << s1.getLastName()<< " has this amount of credits: " << s1.getNumCredits() << endl;

    GradStudent g1("Elias", "Abueita", 35, 1997, 23, 06);
    cout<<"Is "<< g1.getFirstName() << " " << g1.getLastName() << " completed with his graduate studies? " << (g1.getCanGraduate() ? "Yes" : "No") << endl;
    return 0;
}
