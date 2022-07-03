#include <iostream>

using namespace std;

class OP{

public:

double add(float x,float y){

return x+y;


}

double add(double x,double y){

return x+y;


}

int add(int x,int y){

return x+y;
}

string add(string x,string y){

return x+y;
}

};



int main(){

OP a1;

cout<<a1.add(2,4)<<endl;
cout<<a1.add(2.2f,1.0f)<<endl;
cout<<a1.add(2.2,2.0)<<endl;
cout<<a1.add("ab","ab");


}
