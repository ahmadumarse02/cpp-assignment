#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int roll_nmb;
    int sem;

public:
    Student() : name("ABC"), age(0), roll_nmb(0000), sem(78) {}  
    Student(string name, int age, int roll_nmb, int sem) : name(name), age(age), roll_nmb(roll_nmb), sem(sem)
    {
        cout << "Object created" << endl;
    }

    void input()
    {
        cout << "Enter your name: ";
        cin.ignore();  
        getline(cin, name);  
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your roll number: ";
        cin >> roll_nmb;
        cout << "Enter your semester: ";
        cin >> sem;
        cout << endl;
    }

    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << roll_nmb << endl;
        cout << "Semester: " << sem << endl;
    }

    int getSizeOfObject()
    {
        return sizeof(*this);
    }
};

int main()
{
    Student s;
    s.input();
    s.output();
    cout << "Size of object is  : " << s.getSizeOfObject() << endl;
    return 0;
}
