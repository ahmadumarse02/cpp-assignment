#include<iostream>
using namespace std;
int main()
{
	int n,oddsum,evensum;
	oddsum=0;
	evensum=0;
	
	cout<<"Enter a positive number:";
	cin>>n;
	
//	Input a positive number and display the sum of all odd and even	
	
	while(n>=0)
	{
		if(n%2==0)
			evensum=evensum+n;
		
		else
			oddsum=oddsum+n;
			n--;
	}
	
	cout<<"The sum of even numbers:"<<evensum;
	cout<<endl;
	
	cout<<"The sum of odd numbers:"<<oddsum;
	
	return 0;
}
