#include <iostream>
using namespace std;
class Student
{
public:
    int rollNumber;
    int marks;
public:
    Student(int roll, int m)
    {
        rollNumber = roll;
        marks = m;
    }
    void display()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(1, 75);
    Student s2(2, 90);

    s1.display(); // expected output: Roll Number: 1, Marks: 75
    s2.display(); // expected output: Roll Number: 2, Marks: 90

    s1.marks = 80; // changing marks of s1
    s1.display();
    s2.display(); 

    return 0;
}
