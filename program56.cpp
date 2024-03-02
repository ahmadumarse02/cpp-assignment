#include<iostream>
using namespace std;
class student{
	private:
	char name[50];
	int age;
	int roll_nmb;
	int sem;
	public:
		student(){name="ABC";age=00; roll_nmb=0000;sem=78 ;}
		void output();
	student( char name[],int age, int roll_nmb,int sem){
		cout<<"object created";
	}
	void input(){
		cout<<"Enter your name: ";cin.get(name,50);
		cout<<"Enter your age: ";cin>>age;
		cout<<"Enter your roll nmb: ";cin>>roll_nmb;
		cout<<"Enter your semester: ";cin>>sem;
			cout<<endl;
	}

};
void student::output(){
//	global resolution operator (::)
	cout<<"Name: "<< name <<endl;
	cout<<"age: "<<age<<endl;
	cout<<"roll no: "<<roll_nmb<<endl;
	cout<<"sem: "<<sem<<endl;	
}
int main(){
	student st,o("xyz",20,4231,2);
	s.input();
	s.output();
	cout<<"Size of object is  : "<<sizeof(s);
	
return 0;	
}
