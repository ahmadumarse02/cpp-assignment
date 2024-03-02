#include<iostream>
using namespace std;
int main()
{
	int i,j,sum;
	
	for(i=1; i<=5; i++)
	{
		cout<<"1";
		sum=1;
		for(j=2; j<=i; j++)
		{
			cout<<"+"<<j;
			sum=sum+j;
		}
		cout<<"=";
		cout<<sum;
		cout<<endl;
	}
	
	return 0;
}
