// Write a program that input salary and grade. it adds 50% bonus if the grade is greater than 15. It adds 25% bonus if the grade is 15 or less and then display the total salary.

#include<iostream>
using namespace std;
int main()
{
	float salary,bonus;
	int grade;
	
//	Input

	cout<<"Enter your salary:";
	cin>>salary;
	cout<<"Enter a grade:";
	cin>>grade;
	
//	Applying bonus based on grade
	
	if(grade > 15)
	{
		bonus=salary*50/100;	// 50% bonus
	}
	
	else
	{
		bonus=salary*25/100;	// 25% bonus
	}
	
	//Display total salary
	
	salary=salary+bonus;
	
    cout<<"Your total salary is Rs.";
    cout<<salary;
    
    return 0;
}
