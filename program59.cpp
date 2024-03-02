#include<iostream>
using namespace std;
class Test
{
	private:
		int n;
	public:
	Test()
	{
		cout<<"Object created........"<<endl;
	}
	~Test()
	{
		cout<<"Object destroyed........"<<endl;
	}
};
main()
{
	Test a,b,c;
}
