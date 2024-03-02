#include<iostream>
using namespace std;
int main()
{
	int a,b,c,r;
	
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number :";
	cin>>b;
	c=1;
	r=1;
	
//	Gets two numbers from the user and displays first number raise to the power of second number 
	
	do 
	{
		r=r*a;
		c=c+1;		
	}
	
	while(c<=b);
		cout<<"Result is"<<r;
	
	return 0;
}
