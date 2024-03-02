// Write a program that input five numbers and display the maximum number and minimum number .

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,max,min;
	
	//Input five number
	
	cout<<"Enter five number:";
	cin>>a>>b>>c>>d>>e;
	
//	Check Maximum or Minimum number
	
	min=max=a;
	
	if(b<min)min=b;
	if(c<min)min=c;
	if(d<min)min=d;
	if(e<min)min=e;
	if(b>max)max=b;
	if(c>max)max=c;
	if(d>max)max=d;
	if(e>max)max=e;
	
	cout<<"Largest number is";		//Largest number
	cout<<max;
	cout<<endl;
	
	cout<<"Smallest number is";	//Smallest number
	cout<<min;
	cout<<endl;
	
	return 0;
}
