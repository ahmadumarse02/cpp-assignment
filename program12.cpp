// Write a program that calculate the electricity bill.

#include<iostream>
using namespace std;
int main()
{
	int units;
	float bill;
	
	cout<<"Enter a units:";
	cin>>units;
	
//	Find bill
	
	if(units>500)
		bill=units*7;
	
	else if(units>300)
		bill=units*5;
	
	else
		bill=units*2;
	
	bill=bill+150;
	
	if(bill>2000)
		bill=bill+(bill*5.0/100);
		
	cout<<"Total bill ="<<bill;
	
	return 0;
}
