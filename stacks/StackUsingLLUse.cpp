#include<iostream>

using namespace std;

#include "StackUsingLL.cpp"


int main(){

Stack<char> s;
s.push('c');
s.push('d');
s.push('e');
s.push('f');
s.push('g');



/*
Stack<double> s;

s.push(10.22);
s.push(20.3);
s.push(30.6);
s.push(40.25);
s.push(50.6666);
*/
s.pop();
s.pop();
cout<<s.top()<<endl;

cout<<s.getSize()<<endl;

cout<<s.isEmpty()<<endl;


/*
// for int only without generic
Stack s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

s.pop();
s.pop();
cout<<s.top()<<endl;

cout<<s.getSize()<<endl;

cout<<s.isEmpty()<<endl;

}
*/
}
