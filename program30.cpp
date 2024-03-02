#include<iostream>
using namespace std;
int main()
{
	long int n,c,f;
	c=1;
	f=1;
	
	cout<<"Enter a number.";
	cin>>n;
	
//	Input a number from the user and display the "Factorial"
	
	while(c<=n)
	{
		f=f*c;
		c=c+1;
	}
	
	cout<<"Factorial of :"<<n<<" is "<<f;
	
	return 0;
}
