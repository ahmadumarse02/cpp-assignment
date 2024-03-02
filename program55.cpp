#include<iostream>
using namespace std;
struct Test
{
	int rno;
	int m[5];
};

int main()
{
	Test r;
	int i,t=0;
	float avg=0.0;
	
	cout<<"Enter roll no:";
	cin>>r.rno;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter marks:";
		cin>>r.m[i];
		t=t+r.m[i];
	}
	
	avg=t/5.0;
	cout<<"Roll no:";
	cout<<r.rno;
	cout<<endl;
	
	cout<<"Total marks:";
	cout<<t;
	cout<<endl;
	
	cout<<"Average:";
	cout<<avg;
	cout<<endl;
	
	return 0;
}
