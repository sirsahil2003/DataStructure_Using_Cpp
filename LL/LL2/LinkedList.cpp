#include<iostream>

using namespace std;

#include "Node.cpp"


Node* reverseLL(Node* head){

if(head == NULL || head->next == NULL){
return head;
}

Node* smallans = reverseLL(head->next);

Node* temp = smallans;
while(temp->next != NULL){
temp = temp->next;
}

temp->next = head;
head->next = NULL;

return smallans;

}



Node* MergeTwoSortedList(Node* h1, Node* h2){
Node* fh = NULL;
Node* ft = NULL;

while(h1!=NULL && h2!=NULL){

if(h1->data>h2->data){

fh=h2;
ft=h2;
h2 = h2->next;

}

else{

fh = h1;
ft = h1;
h1 = h1->next;


}
}




if(h1->data<h2->data){
ft->next = h1;
ft = ft->next;
h1 = h1->next;

}
else{
ft->next = h2;
ft = ft->next;
h2 = h2->next;

}



if(h1!=NULL){

ft->next = h1;

}

if(h2 != NULL){

ft->next = h2;

}


return fh;

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

void mid_point(Node *head,int n){

int i=0;
Node* temp = head;

while(i<n){
temp = temp->next;
i++;
}

cout<<"ith node is::"<<temp->data<<endl;


}

void print(Node * head){
Node* temp = head;

cout<<"LinkedList is as following:::::";

while(head!=NULL){

cout<<head->data<<"->";
head = head->next;

}
cout<<endl;
}




int main(){

Node *head1 = takeInput_improved();
print(head1);

Node* head3 = reverseLL(head1);
print(head3);

//Node *head2 = takeInput_improved();
//print(head2);
/*
Node* temp = MergeTwoSortedList(head1,head2);
print(temp);
*/






return 0;
}
