// Write a program that input a number and finds whether it is even or odd.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number:";
	cin>>n;
	
//	Find even or odd
	
	if(!(n%2==0))
	{
		cout<<"The number is odd.";
	}
	
	else
	{
		cout<<"The number is even.";
	}
	
	return 0;
}
