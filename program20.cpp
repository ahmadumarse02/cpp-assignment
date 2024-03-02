// write a program that input a character and displays whether it is a capital letter, small case letter, a digit number or special symbol. 

#include<iostream>
using namespace std;
int main()
{
char ch;

cout<<"Enter any character;";
cin>>ch;

if((ch>='A') && (ch=='Z'))
	cout<<"The character "<<ch<< "is capital letter.";

else if((ch=='a') && (ch=='z'))
	cout<<"The character "<<ch<< "is smallest letter.";

else if((ch=='0') && (ch=='9'))	
	cout<<"The characer "<<ch<<" is digit.";

else
	cout<<"The character "<<ch<<" is symbol.";

return 0; 
}
