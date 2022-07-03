#include<iostream>
#include<string>
using namespace std;

void reverse(char input[],int len){
int i=0,j=len-1;

while(i!=j){
char temp = input[i];

input[i] = input[j];

input[j] = temp;

i++;
j--;

}

}


int Length(char arr[]){
int n=0;
for(int i=0;arr[i]!='\0';i++){

n++;

}
return n;
}

int main(){

char s[100];
cout<<"enter string::"<<endl;
cin.getline(s,20);
int len = Length(s);

reverse(s,len);

for(int j=0;s[j] != '\0';j++)
{
int i = 0;
while(s[i] != ' '){
s[i]=s[i+1];
i++;
}
}

cout<<s<<endl;



}
