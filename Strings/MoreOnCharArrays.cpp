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

char name[100];

/*
cout<<"enter your name"<<endl;
 // in this case if it encounters space it will not consider characters next to it
cin>>name;   

//so cin.getline()  comes into picture



cout<<"Your Name::"<<name<<endl;

*/  


/*
cout<<"enter your name"<<endl;
cin.getline(name,100);

cout<<"Your Name By getLine()::"<<name<<endl;
*/


/*
cout<<"enter your name"<<endl;
cin.getline(name,3);    // it will read only two chars bkz size is 3

cout<<"Your Name By getLine()::"<<name<<endl;

*/
/*
cout<<"enter your name"<<endl;
cin.getline(name,10,'o');    // third parameter we are passing delimiter  till o (excluding o) it will read characters 
//by defualt it contains /n as delimiter
cout<<"Your Name By getLine()::"<<name<<endl;

*/
cout<<"enter your name"<<endl;
cin.getline(name,100);

cout<<"Your Name By getLine()::"<<name<<endl;

int len = Length(name);
cout<<"length of string is:"<<len<<endl;

reverse(name,len);

cout<<"Your Name after reversal::"<<name<<endl;









}
