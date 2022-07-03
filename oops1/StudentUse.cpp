#include<iostream>
using namespace std;

#include "Student.cpp"

int main(){

Student s1(10,1001);
cout<<"Address of s1::"<<&s1<<endl;

s1

Student s2(20);
s2.display();








/*
//cases of calling default constructor

Student s1;

s1.display();

Student s2;

Student* s3 = new Student;  //in this case also default constructor called

s3->display();

//cases of calling parameterized constructor

Student s4(10,1900100);

s4.display();

//for dynamic

Student* s5 = new Student(18,1900100847);

s5->display();
*/







}


