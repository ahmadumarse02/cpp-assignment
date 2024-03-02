// Write a program that input number of week's day and display the nameof the day. 

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of a weakday:";
	cin>>n;
	
//	Input number of weeks day and display the name
	
	switch(n)
	{
		case 1:
			cout<<"Friday";
			break;
		
		case 2:
	    	cout<<"Saturday";
	    	break;
	    
	    case 3:
	    	cout<<"Sunday";
	    	break;
	    
	    case 4:
	    	cout<<"Monday";
			break;
		
		case 5:
			cout<<"Tuesday";
			break;
		
		case 6:
			cout<<"Wednesday";
			break;
		
		case 7:
			cout<<"Thursday";
	    	break;
	    
	    default:
	    	cout<<"invalid number";
	}
	
	return 0;
}
