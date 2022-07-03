#include <iostream>
using namespace std;
#include "QueueUsingArray.h"    //we cant include main fun in .h files 
#include <queue>



int main(){

queue<int> q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

cout<<q.front()<<endl;

q.pop();   //pop is void type in inbuiltQueue

cout<<q.front()<<endl;

cout<<q.size()<<endl;

cout<<q.empty()<<endl;

while(!q.empty()){
cout<<q.front()<<endl;
q.pop();

}

}
