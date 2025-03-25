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
    Employee();
    Employee(string first, string last, string JobTitle, int year, int day, int month);
    string getPositionTitle();
    void setPositionTitle(string jobTitle);

    private:
    string positionTitle;
};
class Student : public Person {
    public:
    Student();
    Student(string first, string last, int numCredits, int year, int day, int month);
    int getNumCredits();
    void setNumCredits(int credits);
    private:
    int num_credits;
};
class GradStudent : public Student {
    public:
    GradStudent();
    GradStudent(string first, string last, int numCredits, int year, int day, int month);
    bool getCanGraduate();
    void checkGraduationStatus();
    private:
    bool can_graduate;
};
#endif // PERSON_H
