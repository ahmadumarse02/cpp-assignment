// Write program that input a number and finds whether it is even or odd using if-else structure.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	// Input number
	
	cout<<"Enter a number:";
	cin>>n;
	
//	Show even or odd
	
	if(n%2==0)
	{
		cout<<n<<"is even.";
	}
	
	else
	{
		cout<<n<<"is odd.";
	}
	
	return 0;
}
