#include<iostream>
using namespace std;
int main()
{
	int n=1;
	
//	Display "AHMAD UMAR" five times using goto statement
	
	loop:
		
	cout<<n<<". AHMAD UMAR "<<endl;
	n++;
	
	if(n<=5) goto loop;
		cout<<"End of program";
	
	return 0;
}
