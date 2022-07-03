#include<iostream>
#include "Node.cpp"

using namespace std;


Node* Delete_Every_N_Node(Node* head,int m,int n){
Node *c1 = head;
Node *c2 = head;
int k=0;


for(int k=0;c2->next!=NULL;k++){
int i=0,j=0,x=0;
while(i<m-1){

c1 = c1->next;
i++;

}

while(j<m+n && c2->next!=NULL){
c2 = c2->next;
j++;
}


if(k==0){

c1->next = c2;
}

else{


c1->next->next = c2;

}



}
return head;
}


Node* swapLL(Node* head,int n1,int n2){

Node* c1=head;
Node* c2=head;
Node* p1=head;
Node* p2=head;
int i=0,j=0;

while(i<n1){

c1= c1->next;

if(i==0){
i++;
continue;
}
else{
p1 = p1->next;
}
i++;
}

while(j<n2){

c2 = c2->next;

if(j==0){
j++;
continue;
}
else{
p2 = p2->next;
}
j++;
}

p1->next = c2;
p2->next = c1;
c1->next = c2->next;
c2->next = p2;

return head;

}


Node* reverseLinkedList(Node* head){

Node* start  = head;
Node *t1;
Node *t2;

t1 = NULL; t2 = NULL;

while(start != NULL){

t2 = start->next;

start->next = t1;

t1 = start;

start = t2;
} 

head = t1;

return head;


}


void mid_point(Node* head,int len){

int i = 0;

Node* temp = head;

while(i<(len-1)/2){
temp = temp->next;
i++;

}

cout<<temp->data<<endl;


}

Node* deleteNode(Node* head,int pos){

Node* temp = head;

int count=0;

if(pos==0){

head = head->next;

delete temp;

return head;


}

while(count<pos-1){

temp = temp->next;
count++;

}

Node* a = temp->next;

temp->next = a->next;

delete a;


return head;

}




Node* insertNode_rec(Node *head,int i, int data){

Node* newNode = new Node(data);

if(i==0){                          //if we want to insert node at start

newNode->next = head;

head = newNode;

return head;

}

if(head == NULL || i<0 ){

head = newNode->next;
return head;

}

head->next = insertNode_rec(head->next,i-1,data);

return head;


}






Node* insertNode(Node *head,int i, int data){

Node* newNode = new Node(data);

int count = 0;
Node* temp = head;

if(i==0){      //if we want to insert node at start

newNode->next = head;

head = newNode;

return head;


}

while(count<i-1){

temp = temp->next;
count++;

}

Node *a = temp->next;   //storing the address of next node to avoid loss of failure
temp->next = newNode;
newNode->next = a;

/*
temp->next = newNode;
newNode->next = a;
*/

//bad practice last nodes lost

/*
newNode->next = a;
temp->next = newNode;
*/

//changes will be persist in main fun as well so no need to return  

return head; 

}





void ith_node(Node *head,int n){
int i=0;
Node* temp = head;

while(i<n){
temp = temp->next;
i++;
}

cout<<"ith node is::"<<temp->data<<endl;


}




int count(Node* head){

//recursive approach 
Node* temp = head;

if(temp == NULL){

return 0;
}

return count(temp->next)+1;





// iterative approach 

/*
Node* temp = head;

int count=0;

while(temp != NULL){

count++;
temp= temp->next;

}

return count;
*/


}




// O(n) complexity bkz of tail pointer
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

// O(n^2) time complexity without tail ptr

Node* takeInput(){

int data;
cin>>data;
Node* head = NULL;  //initially empty LL

while(data != -1){

Node* newNode = new Node(data);

if(head == NULL){

head = newNode;

}

else{

Node* temp = head;
while(temp->next != NULL){

temp = temp->next;

}
temp->next = newNode;

}

cin>>data;

}

return head;

}


void print(Node * head){
Node* temp = head;

cout<<"LinkedList is as following:::::";

while(head!=NULL){

cout<<head->data<<"->";
head = head->next;

}

//till now head is pointing to null so cant used anymore from scratch so good to go with any Temp pointer/variable

/*
while(temp!=NULL){

cout<<temp->data<<endl;
temp = temp->next;

}
*/

}


int main(){


//Node* head1 = takeInput();
//print(head1);

Node* head  = takeInput_improved();

print(head);

cout<<endl;
/*
int n = count(head);

cout<<"Length of LL is::"<<n<<endl;
*/

//mid_point(head,n);

/*
Node* temp1 = reverseLinkedList(head);
print(temp1);
*/

/*
Node* temp2 = swapLL(head,1,3);
print(temp2);
*/
Node* temp3=Delete_Every_N_Node(head,2,3);
print(temp3);




//ith_node(head,3);

/*
cout<<"enter index to insert and data: ";
int i,data;
cin>>i>>data;



head = insertNode_rec(head,i,data);
print(head);
cout<<endl;
*/

/*
int pos;
cout<<"Enter position to delete: ";
cin>>pos;
head = deleteNode(head,pos);
print(head);
*/


/*

Node a1(10);

Node* head = &a1;

Node a2(20);
Node a3(30);
Node a4(40);
Node a5(50);

a1.next=&a2;
a2.next=&a3;
a3.next=&a4;
a4.next=&a5;

print(head);
cout<<endl;

print(head);
cout<<endl;

print(head->next);  
cout<<endl; 

print(head->next->next);
cout<<endl;

print(head->next->next->next);
*/






//assignment pblm
/*
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(20);
    Node *node4 = new Node(20);
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    print(node2);
    */












/*
//statically

Node n1(10);

Node *head = &n1;

Node n2(20);

n1.next = &n2;

//cout<<n1.data<<" "<<n2.data<<endl;

cout<<head->data<<" "<<head<<endl;
cout<<head->next->data<<" "<<head->next<<endl;


//dynamically

Node *n3 = new Node(30);

Node *head1 = n3;


Node *n4 = new Node(40);

n3->next = n4;

cout<<n3->data<<" "<<n4->data<<endl;
cout<<head1->data<<" "<<head1->next->data<<endl;
*/







}
