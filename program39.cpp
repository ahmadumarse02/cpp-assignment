#include<iostream>
using namespace std;
int main()
{
	int a=1,i,increase=3;
	
	cout<<"The series are as follows:";
	
//	  Show the following series: 1 4 7 10 ...........40
	
	for(i=1 ; a<=40 ; i++)
	{
		cout<<a;
		cout<<" ";
		a=a+increase;
	}
	
	return 0;
}
