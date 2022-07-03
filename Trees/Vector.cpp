#include <iostream>
#include <vector>

using namespace std;

int main(){

//dynamic 

//vector<int> *vp new vector<int>();

//static 
vector<int> v;

for(int i=0;i<100;i++){

cout<<"cap:;"<<v.capacity()<<endl;
cout<<"size:;"<<v.size()<<endl;
v.push_back(i+1);


}

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);

v[2] = 100;  //it will overwrite 

// do not use for inserting element 
v[4] = 123;           //these are not considered  
v[5] = 1234;

v.push_back(50);
v.push_back(60);

for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}

v.pop_back();


cout<<"size::"<<v.size()<<endl;

cout<<v.at(2)<<endl;

cout<<v.at(7)<<endl;     //safer to use at 

}
