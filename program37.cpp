#include<iostream>
using namespace std;
int main()
{
	int c,n;
	long int sum;
	sum=0;
	
	cout<<"Enter a number:";
	cin>>n;
	
//	(Sum = 1^2 + 2^2 + 3^2 + ........+n^2)
	
	for(c=1;c<=n;c++)
		sum=sum+(c*c);
	
	cout<<"Sum is:";
	cout<<sum;
	
	return 0;
}
