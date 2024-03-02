#include<iostream>
using namespace std;
class x
{
	private:
		int val;
	public:
	 x	(int v)
		{
		val=v;
		}
		void show(){
			cout<<"value"<<val<<endl;
		}
};
int main()
{
	x n1(20);
//	n1(20);
	n1.show();
	x n2(n1);
	n2.show();
	 x n3(n1);
	n3.show();
}
