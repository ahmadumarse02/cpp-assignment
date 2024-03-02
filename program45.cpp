#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	
//	Input five integers from the user and store them in an array.
	
	for(i=0;i<5;i++)
	{
	cout<<"Enter an integer:";
	cin>>arr[i];
	}
	
	cout<<"The value in array \n";
	
	for(i=0;i<5;i++)
	cout<<arr[i]<<endl;
	
	return 0;
} 
