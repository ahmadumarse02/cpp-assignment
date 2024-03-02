#include<iostream>
using namespace std;
int m1ain()
{
	int x,num;
	
//	Input number from user using for loop.if the number is greater than 0.It display next number or is less than 0 so exit program. 
	
	for(x=1;x<=5;x++)
	{
		cout<<"Enter a number.";
		cin>>num;
		
		if(num<=0)
		continue;
		cout<<"You entered"<<num<<endl;
	}
	
	return 0;
}
