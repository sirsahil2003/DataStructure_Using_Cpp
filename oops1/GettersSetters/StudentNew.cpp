#include<iostream>
using namespace std;
#include "classStudent.cpp"

int main(){

Student s1;

Student* s2 = new Student;

s1.setAge(18,1121);
s1.rollNumber=100;

s1.display();

s2->setAge(19,1121);
s2->rollNumber=101;

s2->display();
}

