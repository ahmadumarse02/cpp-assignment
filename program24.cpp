#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	
	// input numbers
	
	cout<<"Enter a number1:";
	cin>>a;
	cout<<"Enter a opreater:";
	cin>>op;
	cout<<"Enter a number2:";
	cin>>b;
	
//	Calculator
	
	switch(op)
	{
		case '+':
			cout<<a+b;
			cout<<endl;
			break;
		
		case '-':
			cout<<a-b;
			cout<<endl;
			break;
		
		case '*':
			cout<<a*b;
			cout<<endl;
			break;
		
		case '/':
			if(b==0)
			{
				cout<<"Division by zero!"<<endl;
			}
			else
			{
				cout<<a/b;
				cout<<endl;
			}
				
			break;
		
		default:
			cout<<"invalid opreator.";
	}
	
	return 0;
}
