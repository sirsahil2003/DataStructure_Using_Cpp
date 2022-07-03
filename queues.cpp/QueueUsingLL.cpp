#include "climits"

template <typename T>

class Node{

public:

T data;
Node* next;

Node(T data){
this->data = data;

next = NULL;

}

};

template <typename T>

class Queue{

Node<T> *head;
Node<T> *tail;
int size;


public:


Queue(){

head=NULL;
tail = NULL;
size = 0;

};

int getSize(){
return size;

}


T front(){

return tail->data;
}

bool isEmpty(){

return size==0;

}

void Enqueue(T element){

Node<T> *newNode = new Node<T>(element);
if(size == 0){
head = newNode;
tail = newNode;
}

else{
tail->next = newNode;
tail = tail->next;
}
size++;
}

T dequeue(){

if(isEmpty()){
cout<<"Queue is Empty"<<endl;
return 0;
}
T ans = head->data;
Node<T> *temp = head;
head = head->next;
delete temp;
size--;
return ans;

}

};
