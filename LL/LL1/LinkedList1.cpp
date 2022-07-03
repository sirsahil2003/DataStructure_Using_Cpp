#include<iostream>
#include "Node.cpp"

using namespace std;

Node* swapLL(Node* head,int n1,int n2){

Node* start1 = head;
Node* start2 = head;
Node* t1=NULL;
Node* t2=NULL;
Node* prev =NULL;
Node* ahead =NULL;
int i=0,j=0;

while(i<n1+1){

t1 = start1->next;

if(i==0){

continue;
}
else{
prev = start1->next;
}
i++;
}

while(j<n2+1){

ahead = start1->next;

if(i==0){

continue;
}
else{
t2 = start1->next;
}
j++;
}

prev->next = ahead;
t2->next = t1;
t1->next = ahead->next;
ahead->next = t2;

return head;

}



Node* takeInput_improved(){

int data;
cin>>data;
Node* head = NULL;  //initially empty LL
Node* tail = NULL;

while(data != -1){

Node* newNode = new Node(data);

if(head == NULL){

head = newNode;
tail = newNode;

}

else{
tail->next = newNode;

tail = tail->next;

//or
// tail = newNode;

}


cin>>data;

}

return head;

}

void print(Node* head){
Node* temp = head;

cout<<"LinkedList is as following:::::";

while(head!=NULL){

cout<<head->data<<"->";
head = head->next;

}

}

int main(){

Node* head  = takeInput_improved();

print(head);

Node* temp2 = swapLL(head,1,3);

print(temp2);





}
