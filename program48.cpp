#include<iostream>
using namespace std;
int main()
{
	int age[150],i,n,count=0;
	
	cout<<"Enter the number of persons requried:";
	cin>>n;
	cout<<"Enter ages of "<<n<<" Persons.";
	cout<<endl;
	
//	Input age of different person and count the number of person in the age group 50 and 60.
	
	for(i=0 ;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50 && age[i]<=60)
			count=count+1;	
	}

	cout<<count<<"Persons are between 50 to 60.";

	return 0;
}
