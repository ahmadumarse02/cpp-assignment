#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
	string name;
	int age;
	int sem;
	int roll_no;
	friend ostream &operator<<(ostream&,student&);
	friend istream &operator<<(istream&,student&);
	friend operator==(student& st1,student& st2){
		if(strcmp(name,st.name)==false)
		return false;
		if(age!=st.age)
		return false;

	}
};
istream& operator>>(istream&in,student&st){
	cout<<"Enter data,name,age,semester,roll no"<<endl;
	in>>st.name>>st.age>>st.sem>>st.roll_no;
	return in;
}
ostream& operator<<(ostream&out,student&st){
	out<<"Name:"<<st.name<<endl<<"Age:"<<st.age<<endl<<"Semester:"<<st.sem<<endl<<"Rollno:"<<st.roll_no<<endl;
return out;
}
int main(){
	student st1,st2;
	cin>>st1;
	cin>>st2;
	if(st1==st2)
	cout<<"same";
	else
	cout<<"not same";
	return 0;
}
