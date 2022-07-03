#include "climits"
template<typename T>

class StackUsingArray{

T *data;
int nextIndex;
int capacity;

public:

StackUsingArray(int totalSize){

data = new T[totalSize];
nextIndex = 0;
capacity = totalSize;

}

int size(){

	return nextIndex;
}

T top(){
if(isEmpty()){
cout<<"underflow"<<endl;
return 0;
}
return data[nextIndex-1];

}


bool isEmpty(){
return nextIndex==0;
}

void push(T element){
if(nextIndex==capacity){
cout<<"overflow"<<endl;
return;
}
data[nextIndex] = element;
nextIndex++;
}

T pop(){
if(isEmpty()){
cout<<"underflow"<<endl;
return 0;
}

nextIndex--;
return data[nextIndex];
}







};
