//Write a program that inputs three numbers and display maximum number.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	
//	Find Maximum 
	
	if(a>b || a>c)
		cout<<"Maximum number is"<<a;
		cout<<endl;
	
	else if(b>a || b>c)
		cout<<"Maximum number is"<<b;
		cout<<endl;
	
	else if(c>a || c>b) 
		cout<<"Maximum number is"<<c<<endl;
	
	else
		cout<<"result false.";
	
	return 0;
}
