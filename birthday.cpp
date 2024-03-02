#include<iostream>
using namespace std;
struct birth
{
	int day;
	int month;
	int year;
};

main()
{
	birth b;
	cout<<"Enter day of birth:";
	cin>>b.day;
	cout<<"Enter month of birth:";
	cin>>b.month;
	cout<<"Enter year of birth:";
	cin>>b.year;
	
	cout<<"\nYour date of birth is:"<<b.day<<"/"<<b.month<<"/"<<b.year;	
}
