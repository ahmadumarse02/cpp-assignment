// Write a program to input a number and determine whether it is positive, negative or zero.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	// Input number
	
	cout<<"enter a num:";
	cin>>n;
	
	// Check number are positive, negative or zero
	
	if(n < 0)
	{
		cout<<"the number is negative.";
	}
	
	else if(n > 0)
	{
		cout<<"the number is positive.";
	}
	
	else
	{
		cout<<"the number is zero.";
	}
	
	return 0;
}
