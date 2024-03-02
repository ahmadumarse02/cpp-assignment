#include<iostream>
using namespace std;
struct Student
{
	
	int rno;
	int marks;
	float avg;
	char grade;
};

int main()
{
	Student s;
	
	cout<<"Enter rno:";
	cin>>s.rno;
	cout<<"Enter marks:";
	cin>>s.marks;
	cout<<"Enter average:";
	cin>>s.avg;
	cout<<"Enter grade:";
	cin>>s.grade;
	
	cout<<"You entered the following details:\n";
	
	cout<<"Roll no:";
	cout<<s.rno;
	cout<<endl;
	
	cout<<"Marks:";
	cout<<s.marks;
	cout<<endl;
	
	cout<<"Average:";
	cout<<s.avg;
	cout<<endl;
	
	cout<<"grade:";
	cout<<s.grade;
	cout<<endl;
	
	return 0;
}
