#include<iostream>
using namespace std;
class Book
{
	private:
		int pag,pr;
		char title[50];
	public:
		void get()
		{
			cout<<"Enter title:";
			gets(title);
			cout<<"Enter pages:";
			cin>>pag;
			cout<<"Enter price:";
			cin>>pr;
		}
		void show()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Pages: "<<pag<<endl;
			cout<<"Price: "<<pr<<endl;
		}
};
main()
{
	Book b1;
	b1.get();
	Book b2(b1);
	Book b3=b1;
	cout<<"\nThe detail of b1:"<<endl;
	b1.show();
	cout<<"\nThe detail of b2:"<<endl;
	b2.show();
	cout<<"\nThe detail of b3:"<<endl;
	b3.show();
}
