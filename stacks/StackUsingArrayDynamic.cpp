#include "climits"

class StackUsingArray{

int *data;
int nextIndex;
int capacity;

public:

StackUsingArray(){

data = new int[4];
nextIndex = 0;
capacity = 4;

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

int *newData = new int[2*capacity];
for(int i=0;i<capacity;i++){
newData[i] = data[i];

}

capacity *= 2;
delete [] data;

newData = data;

/*
cout<<"overflow"<<endl;
return;
*/
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
