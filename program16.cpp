// Write a program that inputs three numbers and display whether all numbers are equal or not.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	
//	Find equal and different number
	
	if(a==b)
	{
		if(a==c)
			cout<<"All numbers are equal.";
		
		else
			cout<<"All numbers are different.";
	}
	
	else
	{
		cout<<"Numbers are different.";
	}
	
	return 0;
}
