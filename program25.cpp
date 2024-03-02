/*Write a program that converts ASCII number to character and vice versa. The program should display the following menu:
Converts ASCII value to Character
Converts Character to ASCII value*/


#include<iostream>
using namespace std;
int main()
{
	int number,option;
	char letter;
	
	cout<<"1. Convert ASCII value to character";
	cout<<endl;
	cout<<"2. Convert character value to ASCII";
	cout<<endl;
	cout<<"Enter the Option:";
	cin>>option;
	
	switch(option)
	{
		case 1:							//Convert ASCII value to character
			cout<<"Enter a number:";
			cin>>number;
			cout<<"The corresponding character is:"<<char(number);
			cout<<endl;
			break;
		
		case 2:							//Convert character value to ASCII
		    cout<<"Enter a letter:";
			cin>>letter;
			cout<<"ASCII value or the letter is:"<<int(letter);
			cout<<endl; 
			break;
			
		default:
		    cout<<"Invalid Option.";
	   	break;  	      
	}
	
	return 0;
}
