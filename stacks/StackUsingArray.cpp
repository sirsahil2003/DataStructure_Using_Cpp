#include "climits"

class StackUsingArray{

int *data;
int nextIndex;
int capacity;

public:

StackUsingArray(int totalSize){

data = new int[totalSize];
nextIndex = 0;
capacity = totalSize;

}

int size(){

	return nextIndex;
}

int top(){
if(isEmpty()){
cout<<"underflow"<<endl;
return INT_MIN;
}
return data[nextIndex-1];

}


bool isEmpty(){
return nextIndex==0;
}

void push(int element){
if(nextIndex==capacity){
cout<<"overflow"<<endl;
return;
}
data[nextIndex] = element;
nextIndex++;
}

int pop(){
if(isEmpty()){
cout<<"underflow"<<endl;
return INT_MIN;
}

nextIndex--;
return data[nextIndex];
}







};
