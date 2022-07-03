#include<iostream>
using namespace std;
#include<cstring>

#include "Student.cpp"

int main(){

char name[] = "abcd";

Student s1(20,name);

s1.Display();

name[3]='e';

Student s2(22,name);

s2.Display();

Student s3(23,name);

s1.Display();





}
