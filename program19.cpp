//write a program that input character and display the vowel or not.

#include<iostream>
using namespace std;
int main()
{
char ch;

cout<<"Enter any character:";
cin>>ch;

//	Vowel or not

if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	cout<<"You enter a vowel:";
		cout<<ch;
	
else
	cout<<"You enter did not enter a vowel:"<<ch;

return 0;
}
