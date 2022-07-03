#include<iostream>
#include<cstring>

using namespace std;

void printAllPrefixes(char input[]){
for(int i=0;input[i]!='\0';i++){

  for(int j=0;j<=i;j++){
	
	cout<<input[j];
	}     
	cout<<endl;      
	   }
                  

}

int main(){

char s[100];
cout<<"Enter String :"<<endl;
cin>>s;
printAllPrefixes(s);


/*
//strncpy

char s1[100];
char s2[100];
cout<<"Enter String 1:"<<endl;
cin>>s1;
cout<<"Enter String 2:"<<endl;
cin>>s2;

// i want to copy first n characters of source string to destination string

//strncpy(s1,s2,3);

//what if our source string have less chars but we have passed more to copy in this case it will copy chars of source string after that it will append null char 

strncpy(s1,s2,30);


cout<<" s1:"<<s1<<endl;
cout<<" s2:"<<s2<<endl;

*/




/*
char s1[100];
char s2[100];
char s3[100];
cout<<"Enter String 1:"<<endl;
cin>>s1;
cout<<"Enter String 2:"<<endl;

cin>>s2;

// i want to copy or overwrite the string s1 to s2

//strcpy(s2, s1);   //copying s1 to s2


strcpy(s1, s2); 

cout<<" s1:"<<s1<<endl;
cout<<" s2:"<<s2<<endl;

cout<<endl;

strcpy(s3,"HellOWorld");

cout<<" s3:"<<s3<<endl;

*/


/*
 // strcmp 
char s1[100];
char s2[100];

cout<<"Enter String 1:"<<endl;
cin>>s1;

cout<<"Enter String 2:"<<endl;

cin>>s2;

if(strcmp(s1,s2) == 0)
cout<<"Same Strings"<<endl;

else
cout<<"Not Same Strings"<<endl;

*/


/*
//strlen
char input[100];
cout<<"Enter String:"<<endl;
//cin>>input;

cin.getline(input,30);   //it will count spaces as well 


int len = strlen(input);
cout<<len<<endl;

*/



}
