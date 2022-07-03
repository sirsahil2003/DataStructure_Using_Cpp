#include<iostream>

using namespace std;

#include "Student.cpp"

int main(){

Student s1;
Student s2;
Student s3;

cout<<s1.age<<" "<<s1.rollNumber<<endl;

//accessing static member

cout<< Student :: totalStudents <<endl;



//cout<<s1.totalStudents<<endl;
//logically incorrect way so always use scope resolution operator 



//if we want for every object there should one increment to total students

//we will use construvtor to do so



//just like static data members there can be static functions which can work upon static data members only cant access non static data members

cout<<Student::getTotalStudents()<<endl;









}
