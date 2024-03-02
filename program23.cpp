// Write a program that inputs a character from the user and checks whether it is vowel or consonant.

#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	
//	Input character from the user and check wheather it as vowel or consonant
	
	switch(ch)
	{
		case 'A':
		case 'a':
			cout<<"You enter a vowel.";
			break;
		
		case 'E':
		case 'e':
			cout<<"You enter a vowel.";
			break;
		
		case 'I':
		case 'i':
			cout<<"You enter a vowel.";
			break;
		
		case 'O':
		case 'o':
				cout<<"You enter a vowel.";
			break;
		
		case 'U':
		case 'u':
			cout<<"You enter a vowel.";
			break;
		
		default:
			cout<<"You enter a consonant.";	
	}
	
	return 0;
}
