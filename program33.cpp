// Write a program that inputs a positive number. It then display the sumof all odd and even number.

#include<iostream>
using namespace std;
int main()
{
	float num,sum,max,min,avg;
	int count;
	sum=0.0;
	count=0;
	
	cout<<"Enter a number:";
	cin>>num;
	min=num;
	max=num;
	
//	Calculate the average,maximum and minimum of all positive numbers.
	
	while(num>=0.0)
	{
		sum+=num;
		count++;
		
		if(num>max)
			max=num;
			
		else if(num<min)
			min=num;
	
		cout<<"Enter a number:";
	    cin>>num;
	}
	
	if(count==0)
		cout<<"No enter positive number."<<endl;
	
	else
	{
		avg=sum/count;
		
	    cout<<"You entered "<<count<<"number.";
		cout<<endl;
		
	    cout<<"Average ="<<avg;
		cout<<endl;
		
	    cout<<"Maximum ="<<max;
		cout<<endl;
		
	    cout<<"Minimum ="<<min;
		cout<<endl;   
	}
	
	return 0;
}
