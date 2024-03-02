#include<iostream>
using namespace std;

struct Book 
{
	int id;
	int pages;
	float price;
};

main()
{
	Book b1,b2;
	cout<<"Enter id,pages and price of book:";
	cin>>b1.id>>b1.pages>>b1.price;
	cout<<"Enter id,pages and price of book:";
	cin>>b2.id>>b2.pages>>b2.price;
	cout<<"\n The most costly book is as follows:\n";
	
	if (b1.price > b2.price) 
	{
		cout<<"BookID:"<<b1.id;
		cout<<endl;
		cout<<"Pages:"<<b1.pages;
		cout<<endl;
		cout<<"Price:"<<b1.price;
		cout<<endl;
	}
	
	else 
	{
		cout<<"BookID:"<<b2.id;
		cout<<endl;
		cout<<"Pages:"<<b2.pages;
		cout<<endl;
		cout<<"Price:"<<b2.price;
		cout<<endl;
	}
	
}

