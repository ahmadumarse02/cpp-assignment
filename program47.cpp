#include<iostream>
using namespace std;
int main()
{
	int day,month,total;
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	cout<<"Enter the month number:";
	cin>>month;
	cout<<"Enter the day number:";
	cin>>day;
	total=day;
	
//	Input current day and month from the user.It then calculate and display the total number.
	
	for(int x=0;x<month-1;x++)
		total+=days_per_month[x];
		
	cout<<"The number of days in the year till date = ";
	cout<<total;
	cout<<endl;
	
	return 0;
}
