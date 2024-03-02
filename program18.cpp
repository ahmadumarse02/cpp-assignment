// Write a program that display degree-to-radian table using while loop.

#include<iostream>
#include<iomanip.>
using namespace std;
const double PI=3.141593;
int main()
{
	int degrees=0;
	double radian;
	
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<"Degree to radian \n";
	
//	Display the degree to radian table using while loop
	
	while(degrees<=360)
	{
		radian=degrees*PI/180;
		cout<<setw(6)<<degrees<<setw(12)<<radian;
		cout<<endl;
		degrees=degrees+10;
	}
	
	return 0;
}
