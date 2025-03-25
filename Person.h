#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string first, string last, int year, int day, int month);
        string getName();
        string getBirthdate();
        void setName(string first);
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
    private:
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
    private:
};



string Person::getName() {
    return Fname;
}
string Person::getBirthdate() {
return to_string(birthDay) + to_string(birthMonth) + to_string(birthYear);
}

int Student::getNumCredits() {
    return num_credits;
};
void Person::setName(string first) {
    Fname = first;
}
void Person::setBirthdate(int year,int month, int day) {
    birthYear = year;
    birthMonth = month;
    birthDay = day;
}
void Student::setNumCredits(int credits) {
    num_credits = credits;
}
#endif // PERSON_H
