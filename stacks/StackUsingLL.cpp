#include "climits"

#include<iostream>
using namespace std;

// O(1) of All operations with templates
template<typename T>   //in order to make stack generic to all data types
class Node{
public:
	T data;
	Node<T> *next;   // we are making pointer next to the type of template 
	
Node(T data){
this->data = data;
next = NULL;

}

};

template<typename T>

class Stack{

Node<T> *head;
int size;

public:	

Stack(){

head = NULL;
size = 0;



}


int getSize(){

return size;
}	
	
T top(){

return head->data;


}

void push(T element){

Node<T> *newNode = new Node<T>(element);

if(head==NULL){

head = newNode;

}

else{
newNode->next = head;
head = newNode;
}

size++;

}

//we want all cases in O(1) time but only pop() operation is taking O(n) time so this is one approach, another approach that may come into mind is that we can use prev pointer just to point a step back node from tail node so that we can point tail pointer to this but this will not work as we cant step back in singly LL so this approach is not possible 
// another approach that can make pop() opeartion O(1) is we will create LL in reverse LL (intution just to visulize)

void pop(){
Node<T> *temp = head;
cout<<head->data<<endl;
head = head->next;

size--;
}

bool isEmpty(){
return head==0;

}


};



/*
#include<iostream>
using namespace std;


template<typename T>   //in order to make stack generic to all data types
class Node{
public:
	T data;
	Node<T> *next;   // we are making pointer next to the type of template 
	
Node(T data){
this->data = data;
next = NULL;

}

};

template<typename T>

class Stack{

Node<T> *head;
int size;
Node<T> *tail;

public:	

Stack(){

head = NULL;
tail = NULL;
size = 0;



}


int getSize(){

return size;
}	
	
T top(){

return tail->data;


}

void push(T element){

Node<T> *newNode = new Node<T>(element);

if(head==NULL){

head = newNode;
tail = newNode;
}

else{
tail->next = newNode;
tail = tail->next;
}
size++;

}

//we want all cases in O(1) time but only pop() operation is taking O(n) time so this is one approach, another approach that may come into mind is that we can use prev pointer just to point a step back node from tail node so that we can point tail pointer to this but this will not work as we cant step back in singly LL so this approach is not possible 
// another approach that can make pop() opeartion O(1) is we will create LL in reverse LL (intution just to visulize)

void pop(){
Node<T> *temp = head;
cout<<tail->data<<endl;

for(int i=0;temp->next->next!=NULL;i++){
temp = temp->next;

}
tail = temp;
temp->next = NULL;

size--;
}

bool isEmpty(){
return head==0;

}


};
*/



/*
#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	
Node(int data){
this->data = data;
next = NULL;

}

};


class Stack{

Node* head;
int size;
Node* tail;

public:	

Stack(){

head = NULL;
tail = NULL;
size = 0;



}


int getSize(){

return size;
}	
	
int top(){

return tail->data;


}

void push(int element){

Node* newNode = new Node(element);

if(head==NULL){

head = newNode;
tail = newNode;
}

else{
tail->next = newNode;
tail = tail->next;
}
size++;

}

//we want all cases in O(1) time but only pop() operation is taking O(n) time so this is one approach, another approach that may come into mind is that we can use prev pointer just to point a step back node from tail node so that we can point tail pointer to this but this will not work as we cant step back in singly LL so this approach is not possible 
// another approach that can make pop() opeartion O(1) is we will create LL in reverse LL (intution just to visulize)

void pop(){
Node* temp = head;
cout<<tail->data<<endl;

for(int i=0;temp->next->next!=NULL;i++){
temp = temp->next;

}
tail = temp;
temp->next = NULL;

size--;
}

bool isEmpty(){
return head==0;

}


};
*/




/*     O(1) pop operation 
#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	
Node(int data){
this->data = data;
next = NULL;

}

};


class Stack{

Node* head;
int size;


public:	

Stack(){

head = NULL;
size = 0;



}


int getSize(){

return size;
}	
	
int top(){

return head->data;


}

void push(int element){

Node* newNode = new Node(element);

if(head==NULL){

head = newNode;

}

else{
newNode->next = head;
head = newNode;
}
size++;

}

void pop(){    // O(1) pop to do so we need to arrange list like reverse 

cout<<head->data<<endl;
head = head->next;

size--;
}

bool isEmpty(){
return head==0;

}






};
*/
