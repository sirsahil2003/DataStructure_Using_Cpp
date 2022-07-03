#include <cmath>
#include <cstdio>

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update(int *a,int *b) {
    // Complete this function
    
    int *pa = *a + *b;
    int *pb = abs(*a-*b);
     
    
       
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a;
    cin>>b;
    update(pa,pb);
    cout<<a<<endl;
    cout<<b<<endl;
    
    
      
    return 0;
}

