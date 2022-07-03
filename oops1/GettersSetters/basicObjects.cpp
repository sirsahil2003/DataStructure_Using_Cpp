#include<iostream>
using namespace std;
#include "classStudent.cpp"

int main(){

//creates objects statically and accesing them

Student s1;
Student s2;

//s1.age=19;
s1.rollNumber=1901012111;


cout<<"S1 age::"<<s1.getAge()<<endl;
cout<<"S1 roll num::"<<s1.rollNumber<<endl;

s1.display();

cout<<"S2 age::"<<s2.getAge()<<endl;
cout<<"S2 roll num::"<<s2.rollNumber<<endl;

s2.display();



//creates objects dynamically and accesing them 

//int* a=new int;

// *a=5;


Student* s6 = new Student;

//(*s6).age=20;

(*s6).getAge();


(*s6).rollNumber=100;

cout<<"S6 age::"<<(*s6).getAge()<<endl;
cout<<"S6 roll num::"<<(*s6).rollNumber<<endl;

(*s6).display();



//another way to assign values in dynamic alloc

Student* s7 = new Student;

//s7 -> age=26;

s7-> getAge();
s7 -> rollNumber=190122334;

cout<<"S7 age::"<<s7 -> getAge()<<endl;
cout<<"s7 roll num::"<<s7 -> rollNumber<<endl;

s7->display();






}
