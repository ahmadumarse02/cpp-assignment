#include<iostream>
using namespace std;
struct Student
{
	int rollno;
	int marks;
	float avg;
	char grade;
};

int main()
{
	Student s;
	
	cout<<"Enter roll no:";
	cin>>s.rollno;
	cout<<"Enter marks";
	cin>>s.marks;
	cout<<"Enter Average";
	cin>>s.avg;
	cout<<"Enter Grade";
	cin>>s.grade;
	
	cout<<"-----Enter the following detail-----\n";
	
	cout<<"Roll no:"<<s.rollno;
	cout<<endl;
	cout<<"Marks:"<<s.marks;
	cout<<endl;	
	cout<<"Average:"<<s.avg;
	cout<<endl;
	cout<<"Grade:"<<s.grade;
	cout<<endl;
}
