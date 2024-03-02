/*Write a program that inputs test score of a student and display his grade according to the following criteria:
Test Score			Grade
>=90         			A
80-89       			B
70-79        			C
60-69       			D
Below 60        		F*/


#include<iostream>
using namespace std;
int main()
{
	int score;
	
	// Input score
	
	cout<<"Enter a score:";
	cin>>score;
	
	if(score>=90)
		cout<<"Your grade is A.";
	
	else if(score>=80)
		cout<<"Your grade is B.";
	
	else if(score>=70)
		cout<<"Your grade is C.";
	
	else if(score>=60)
		cout<<"Your grade is D.";
	
	else if(score>=50)
		cout<<"Your grade is E.";
	
	else
		cout<<"Your grade is F.";
	
	return 0;
}
