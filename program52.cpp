#include<iostream>
using namespace std; 
int main()
{
	int i,j,max,min;
	int arr[2][4]={{15,21,9,84},{33,723,18,47}};
	
	// show maximum and minimum number
	
	max=min=arr[0][0];
	
	for(i=0;i<2;i++)
		for(j=0;j<4;j++)
	{
		if(arr[i][j]>max)
		max=arr[i][j];
		
		if(arr[i][j]<min)
		min=arr[i][j];
	}
	
	cout<<"Maximum = "<<max;
	cout<<endl
	cout<<"Minimum = "<<min;
	cout<<endl;
	
	return 0;
}
