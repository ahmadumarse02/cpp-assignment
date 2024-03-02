#include<iostream>
using namespace std;
int main()
{
	int tab,len,c;
	
	cout<<"Enter number for tabel:";
	cin>>tab;
	cout<<"Enter lenght of table:";
	cin>>len;
	
//	input table number and lenght of table using for loop
	
	for(c=1;c<=len;c++)
		cout<<tab<<"*"<<c<<"="<<tab*c<<endl;
	
	return 0;
}
