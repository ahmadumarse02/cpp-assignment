#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg=0.0;

// Input values from the user and store them in the array
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter values:";
		cin>>arr[i];
		sum=sum+arr[i];			// Calculate sum as values are entered
	}
	avg=sum/5.0;		// Calculate average
	
	// Display sum and average
	cout<<"Sum is ";
	cout<<sum;
	cout<<endl;
	
	cout<<"Average is";
	cout<<avg;
	
	return 0;
}
