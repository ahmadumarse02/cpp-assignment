#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,min,temp;
	
//	Get five number from the user in an array and then sorts in assending order.
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter value:";
		cin>>arr[i];
	}
	cout<<"the orignal values in array:\n";
	
	for(i=0;i<5;i++)
		cout<<arr[i]<<" ";
		
	for(i=0;i<4;i++)
	{
		min = i;
		
		for(j=i+1;j<5;j++)
			if(arr[j]<arr[min])
				min=j;
				
			if(min!=i)
			{
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
			}
		}	
		cout<<"\n The sorted array:\n";
		
		for(i=0;i<5;i++)
			cout<<arr[i]<<" ";
			
	return 0;
}
