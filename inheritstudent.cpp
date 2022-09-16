/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include <iostream>
using namespace std;

class Person
{

public:
    string name;
    int age;

    void nameFunc()
    {
        cout << "Enter name: " << endl;
        cin >> name;
    }
    void ageFunc()
    {
        cout << "Enter age: " << endl;
        cin >> age;
    }
    void displayPerson()
    {
        cout << "Person name: " << name << endl;
    }
};

class Student
{
public:
    float percent;

    void percentFunc()
    {
        cout << "Enter percentage: " << endl;
        cin >> percent;
    }
};

class Teacher : public Student, public Person
{
public:
    float salary;

    void salaryFunc()
    {
        cout << "Enter salary: " << endl;
        cin >> salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Teacher abc;
    abc.nameFunc();
    abc.ageFunc();
    abc.salaryFunc();
    abc.display();
}
