#include "Person.h"
#include <sstream>
#include <string>
using namespace std;

//person class
Person::Person() : Fname("placeholder"), Lname("placeholder"), birthYear(2000), birthMonth(1), birthDay(1) {}
Person::Person(string first, string last, int year, int day, int month): Fname(first), Lname(last), birthYear(year), birthMonth(month), birthDay(day) {}
string Person::getFirstName() {
    return Fname;
}
void Person::setFirstName(string first) {
    Fname = first;
}
string Person::getLastName() {
    return Lname;
}
void Person::setLastName(string last) {
    Lname = last;
}
string Person::getBirthdate() {
    return to_string(birthMonth) + "-" + to_string(birthDay) + "-" + to_string(birthYear);
}
void Person::setBirthdate(int year,int month, int day) {
    birthYear = year;
    birthMonth = month;
    birthDay = day;
}
//employee
Employee::Employee() : Person(), positionTitle("placeholder") {}
Employee::Employee(string first, string last, string jobTitle, int year, int day, int month): Person(first, last, year, day, month), positionTitle(jobTitle) {}
string Employee::getPositionTitle() {
    return positionTitle;
}
void Employee::setPositionTitle(string JobTitle) {
    positionTitle = JobTitle;
}
//student
Student::Student() : Person(), num_credits(1) {}
Student::Student(string first, string last, int numCredits, int year, int day, int month): Person(first, last, year, day, month), num_credits(numCredits) {}

int Student::getNumCredits() {
    return num_credits;
};
void Student::setNumCredits(int numCredits) {
    num_credits = numCredits;
}
//gradstudent
GradStudent::GradStudent(string first, string last, int numCredits, int year, int day, int month):Student(first, last, numCredits, year, day, month) {
    checkGraduationStatus();
}
bool GradStudent::getCanGraduate() {
    return can_graduate;
}
void GradStudent::checkGraduationStatus() {
    if (getNumCredits() >= 30) {
        can_graduate = true;
    } else {
        can_graduate = false;
    }
}
