//write that inputs marks of three subjects. If the average of marks is more than 80, it display two message "You are above standard"and "Admission granted!"

#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3;		//sub means subject
	float avg;
	
	// Input marks of three subjects
	
	cout<<"Enter a numbers of sub1:";
	cin>>sub1;
	
	cout<<"Enter a numbers of sub2:";
	cin>>sub2;
	
	cout<<"Enter a numbers of sub3:";
	cin>>sub3;
	
	// Calculate average marks
	
	avg=(sub1+sub2+sub3)/3;
	cout<<"average:";
	cout<<avg;
	cout<<endl;
	
	// Check if average is more than 80
	
	if(avg >= 80)
	{
		cout<<"You are above standard!";
		cout<<endl;
		
		cout<<"Adimission granted!";
	}
	
	else
	{
		cout<<"Adimission not granted!";
	}
	
	return 0;
}
