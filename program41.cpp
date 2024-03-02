#include<iostream>
using namespace std;
int main()
{
	int i,num,mid,sum=0;
	
	cout<<"Enter the number:";
	cin>>num;
	mid=num/2;
	
//	Input number and check whether it is perfect number or not.
	
	for(i=1 ; i<=mid ; i++)
	{
		if((num%1)==0)
			sum=sum+i;
	}
	if(sum==num)
		cout<<num<<"is a perfect number";
	
	else
		cout<<num<<"is not a perfect number";
	
	return 0;
}
