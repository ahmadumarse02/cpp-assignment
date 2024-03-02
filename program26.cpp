#include<iostream>
using namespace std;
int main()
{
	int marks;
	
//	Input marks of student and display "pass" or "fail"
	
	cout<<"Enter your marks:";
	cin>>marks;
	cout<<"Result is "<<(marks>40 ?"Pass" : "Fail");
	
	return 0;
}
