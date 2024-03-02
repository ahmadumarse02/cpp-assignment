// Write a program to input a number and determine wheater it is positive, negative and zero.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	// Input number
	
	cout<<"enter a number:";
	cin>>n;
	
//	Display miximum number
	
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
