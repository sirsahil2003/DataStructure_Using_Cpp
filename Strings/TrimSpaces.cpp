#include<iostream>
#include<string>
using namespace std;

int main(){

char s[100];
cout<<"enter string::"<<endl;
cin.getline(s,20);

for(int i=0;s[i]!='\0';i++){
if(s[i]==' '){
int j=i;
while(s[j]!='\0'){
s[j] = s[j+1];
j++;
}
}
}

cout<<s<<endl;



}
