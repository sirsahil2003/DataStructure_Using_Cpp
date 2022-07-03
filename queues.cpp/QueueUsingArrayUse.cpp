#include <iostream>

using namespace std;

#include "QueueUsingArray.cpp"

int main(){
Queue<double> q(4);

q.Enqueue(10.22);
q.Enqueue(20.34);
q.Enqueue(30.34);
q.Enqueue(40.45);
q.Enqueue(50.43);
q.Enqueue(60.34);
cout<<q.sizeQ()<<endl;
cout<<q.Dequeue()<<endl;
cout<<q.sizeQ()<<endl;

cout<<q.front()<<endl;


cout<<q.isEmpty()<<endl;

/*
Queue q(5);

q.Enqueue(10);
q.Enqueue(20);
q.Enqueue(30);
q.Enqueue(40);
q.Enqueue(50);
q.Enqueue(60);
cout<<q.sizeQ()<<endl;
cout<<q.Dequeue()<<endl;
cout<<q.sizeQ()<<endl;

cout<<q.front()<<endl;


cout<<q.isEmpty()<<endl;

*/


}
