#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,x;
	float sum=0,den;
	
	cout<<"\n Enter the value of x:";
	cin>>x;
	cout<<"\n Enter the range :";
	cin>>n;
	
//	Input value of x and range.Calculate and print the sum of series: 1+1/x+1/x^2+1/x^3+........
	
	for(i=0;i<n;i++)
		{
			den=pow(x,i);
			sum=sum+(1/den);
		}
	
	cout<<"Sum of series :"<<sum;
	
	return 0;
}
