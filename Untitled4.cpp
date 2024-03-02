#include<iostream>
#include<string.h>

#ifndef STUDENT_H;
#define STUDENT_H;

using namespace std;
class Student{
	char name[50];
	int age;
	int roll_no;
	int semester;
	public:
		void output();
//		~student();
		
		Student();	
		Student(char *arr,int a,int b,int c);
	void input();	
};
	

#endif



