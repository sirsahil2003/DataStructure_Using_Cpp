#include<iostream>

using namespace std;


int LengthofString(char arr[]){
int n=0;
for(int i=0;arr[i]!='\0';i++){
n++;

}
return n;
}


int main(){

//char name[100] = "sahil";

char name[100];
cout<<"enter your name::"<<endl;
cin>>name;
/*
name[6]='h';   //it will not be printed as it comes after terminating character

name[5] = 'k';   //this will overwrite terminating character and "\0" will be placed at last empty position in char arrays


name[3] = '\0';      //elements after this pos will not be printed

*/
cout<<"Your Name::"<<name<<endl;


cout<<LengthofString(name)<<endl;


}


