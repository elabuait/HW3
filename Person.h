#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string first, string last, int year, int day, int month);
        string getFirstName();
        string getLastName();
        string getBirthdate();
        void setFirstName(string first);
        void setLastName(string last);
        void setBirthdate(int year,int month, int day);
private:
        string Fname;
        string Lname;
        int birthDay;
        int birthMonth;
        int birthYear;
};
class Employee : public Person {
    public:
    string getPositionTitle();
    void setPositionTitle(string jobTitle);
    private:
    string positionTitle;
};
class Student : public Person {
    public:
    int getNumCredits();
    void setNumCredits(int credits);
    private:
    int num_credits;
};
class GradStudent : public Student {
    public:
    bool getCanGraduate();
    private:
    bool can_graduate;
};


Person::Person(string first, string last, int year, int day, int month): Fname(first), Lname(last), birthYear(year), birthMonth(month), birthDay(day) {}
string Person::getFirstName() {
    return Fname;
}
string Person::getLastName() {
    return Lname;
}
string Person::getBirthdate() {
return to_string(birthDay) + to_string(birthMonth) + to_string(birthYear);
}

int Student::getNumCredits() {
    return num_credits;
};
bool GradStudent::getCanGraduate() {
    return can_graduate;
}
string Employee::getPositionTitle() {
    return positionTitle;
}
void Person::setFirstName(string first) {
    Fname = first;
}
void Person::setLastName(string last) {
    Lname = last;
}
void Person::setBirthdate(int year,int month, int day) {
    birthYear = year;
    birthMonth = month;
    birthDay = day;
}
void Student::setNumCredits(int credits) {
    num_credits = credits;
}
void Employee::setPositionTitle(string JobTitle) {
    positionTitle = JobTitle;
}

#endif // PERSON_H
