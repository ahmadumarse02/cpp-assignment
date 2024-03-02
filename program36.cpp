#include<iostream>
using namespace std;
int main()
{
	int n; 
	cout<<"Enter a number:";
	cin>>n;
	
	int num=n;
	int high=n%10,low=n%10,rem;
	n=n/10;
	
//	Input number from the user and prints the lowest and higest digit in the number
	
	for(int i=n;i>=1;i=i/10)
    {
    	rem=i%10;
    	if(rem>high)
    		high=rem;
    	if(rem<low)
    		low=rem;
	}
	cout<<"\n The higest digit of";
	cout<<num;
	cout<<"is";
	cout<<high;
	
	cout<<"\n The lowest digit of";
	cout<<num;
	cout<<"is";
	cout<<low;
	
	return 0;
}
