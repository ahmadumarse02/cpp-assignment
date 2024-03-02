#include<iostream>
using namespace std; 
int main()
{
	int c,num,p=1;
	
	// Input integer
	
	cout<<"Enter an integer:";
	cin>>num;
	
//  Input integer and print if it is prime or composite	
	
	for(c=2;c<=num/2;c++)
		if(num%c==0)
		{
			p=0;
			break;
		}
		{
		if(p==1)
		  cout<<num<<"is a prime number.";	
		
		else
		  cout<<num<<"is a composite.";
		}
		
	return 0;
}
