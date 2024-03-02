//write a program that input two integer. It determines and prints if the first integer is a multiply of second integer.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter first integer:";
	cin>>a;
	cout<<"Enter second integer:";
	cin>>b;
	
//	1st is multiple os 2nd number
	
	if(a%b==0)
	{
		cout<<"The first number is a multiply of second number.";
	}
	
	else
	{
		cout<<"The second number is not multiply of second number.";
	}
	
	return 0;
}
