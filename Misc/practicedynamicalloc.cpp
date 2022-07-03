#include <iostream>

#define SQUARE(x) x*x

using namespace std;



void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){

const int p = 5;
int const *q = &p;

p++;
q++;
(*q)++;






/*
int N;
cout<<"enter num::::"<<endl;
cin>>N;
int x = SQUARE(N);
    cout << x<<endl;
 */

   


    /*
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
    */
}
