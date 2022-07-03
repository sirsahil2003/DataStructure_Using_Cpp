#include <iostream>
using namespace std;
#include "QueueUsingLL.cpp"

int main(){

Queue<int> q;

q.Enqueue(10);
q.Enqueue(20);
q.Enqueue(30);
q.Enqueue(40);
q.Enqueue(50);

cout<<q.getSize()<<endl;

cout<<q.dequeue()<<endl;

cout<<q.getSize()<<endl;

cout<<q.isEmpty()<<endl;

}
