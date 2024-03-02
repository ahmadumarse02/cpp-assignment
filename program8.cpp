// write a program that input a year and finds whether it is a leap year or not .

#include<iostream>
using namespace std;
int main()
{
	int y;
	
	// Input year
	
	cout<<"Enter a number:";
	cin>>y;
	
	// Show Leap year
	
	if(y%4==0)
	{
		cout<<y<<" is a leap year.";
	}
	
	else
	{
		cout<<y<<" is not leap year.";
	}
	
	return 0;
}
