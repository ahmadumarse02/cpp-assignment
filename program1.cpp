// Write a program that inputs two numbers and finds whether both are equal

#include<iostream>
using namespace std;
	
	// First variable
	
	int a;
	
	// Second variable
	int b;
	
    // Check if both numbers are equal
    
    void check(){
    	cout<<"This will check two value equal or not equal:"<<endl;
    	if(a==b){
    		cout<<"The number is equal:";
		}
		else{
			cout<<"The number is different.";
		}
	}
	void takeData(){
	cout<<"This will take data from value:"<<endl;
	cout<<"Enter first value:";
	cin>>a;
	cout<<"Enter second value:";
	cin>>b;	
	}
	void show(){
	cout<<"This will show result"<<endl;
	
	}
int main(){
	takeData();
	check();
	show();
	return 0;
}
