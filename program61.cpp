#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
	A()
	{
		a=10;
	}
	friend void show(A,B);
};
	class B
	{
		private:
		int b;
		public:
		B()
		{
			b=20;
		}
		friend
		void show(A,B);
	};
	void show(A x,B y)
	{
		int r;
		r=x.a+y.b;
		cout<<"The value of class A object ="<<x.a<<endl;
		cout<<"The value of class B object ="<<y.b <<endl;
		cout<<"The sum of value ="<<r<<endl;
	}
main()
	{
		A obj1;
		B obj2;
		show(obj1,obj2);
	}
