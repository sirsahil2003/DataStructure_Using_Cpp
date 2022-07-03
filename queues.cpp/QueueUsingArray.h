#include "climits"
template <typename T>
class Queue{

T *arr;
int size;
int nextIndex,firstIndex;
int capacity;


public:

Queue(int s){
capacity = s;
arr = new T[capacity];
size = 0;
nextIndex = 0;
firstIndex = -1;   //cant initialize 0 as initially we do not have any element  at index to deque .

}


void Enqueue(T element){

if(size == capacity){
T *arr1 = new T[2*capacity];

//if we copy old array as is deque operation will not work correctly.
int j=0;

for(int i=firstIndex;i<capacity;i++){
arr1[j] = arr[i];
j++;
}

for(int i=0;i<firstIndex;i++){
arr1[j] = arr[i];
j++;
}

delete [] arr;
arr = arr1;

firstIndex = 0;
nextIndex = capacity;
capacity*=2;
}


arr[nextIndex]=element;
nextIndex=(nextIndex+1) % capacity;
size++;

if(firstIndex==-1)
firstIndex++;
}



T Dequeue(){

if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}

int temp = firstIndex;
firstIndex = (firstIndex+1) % capacity;
size--;
return arr[temp];






}

bool isEmpty(){

return size==0;
}

T front(){

return arr[firstIndex];
}

int sizeQ(){
if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}
return size;
}


};

/*
//static class with generic to all datatypes

template <typename T>

class Queue{

T *arr;
int size;
int nextIndex,firstIndex;
int capacity;


public:
Queue(int s){

arr = new T[s];
size = 0;
nextIndex = 0;
firstIndex = -1;
capacity = s;



}


void Enqueue(T element){
if(size == capacity){
cout<<"Queue Full"<<endl;
return;
}
arr[nextIndex]=element;
nextIndex=(nextIndex+1) % capacity;
size++;

if(firstIndex==-1)
firstIndex++;
}



T Dequeue(){

if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}

int temp = firstIndex;
firstIndex = (firstIndex+1)%capacity;
size--;
return arr[temp];






}

bool isEmpty(){

return size==0;
}

T front(){

return arr[firstIndex];
}

int sizeQ(){
if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}
return size;
}


};
*/



/*
class Queue{


int size;
int nextIndex,firstIndex;
int *arr;
int capacity;


public:
Queue(int s){
arr = new int[s];
size = 0;
nextIndex = 0;
firstIndex = -1;
capacity = s;



}


void Enqueue(int element){
if(size == capacity){
cout<<"Queue Full"<<endl;
return;
}
arr[nextIndex]=element;
nextIndex=(nextIndex+1) % capacity;
size++;

if(firstIndex==-1)
firstIndex++;
}



int Dequeue(){

if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}

int temp = firstIndex;
firstIndex = (firstIndex+1)%capacity;
size--;
return arr[temp];






}

bool isEmpty(){

return size==0;
}

int front(){

return arr[firstIndex];
}

int sizeQ(){
if(isEmpty()){
cout<<"Queue is empty"<<endl;
return 0;
}
return size;
}


};
*/
