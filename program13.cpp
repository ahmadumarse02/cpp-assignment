//Write a program that inputs radius and user's choice. It calculate area of circle if user enter 1 as choice. It calculate circumference if the user enter 2 as choice.

#include<iostream>
using namespace std;
int main()
{
	float area,radius,circumference;
	int choice;
	
	// Input
	
	cout<<"Enter radius:";
	cin>>radius;
	cout<<"Enter choice:";
	cin>>choice;
	
//	find Area or Circumference
	
	if(choice==1)
	{
		area=radius*radius*3.1416;			//Area
		cout<<"Area:"<<area;
	}
	
	else if(choice==2)
	{
		circumference=2*radius*3.1416;		//circumference
		cout<<"Circumference:"<<circumference;
	}
	
	else
	{
		cout<<"invalid choice.";
	}
	
	return 0;	
}
