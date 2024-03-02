#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	n=1;
	sum=0;
	
//	Display first ten numbers and their sum
	
	while(n<=10)
	{
		cout<<n;
		cout<<endl;
	    sum=sum+n;
	    n=n+1;
	}
	
	cout<<"Sum is :"<<sum;
	
	return 0;
}
