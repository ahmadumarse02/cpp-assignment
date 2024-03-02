#include<iostream>
using namespace std; 
int main()
{
	int arr[10],i,max,min;
	
//	Enter ten number from the user and display maximum number.
	
	for(i=0;i<10;i++)
	{
		cout<<"Enter value:";
		cin>>arr[i];
	}
	max=arr[0];
	
	for(i=0;i<10;i++)
		if(max<arr[i])
		max=arr[i];
		
	cout<<"Maximum value:";
	cout<<max;
	
	return 0;
}
