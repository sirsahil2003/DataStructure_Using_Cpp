#include<iostream>
#include<cstring>

using namespace std;

void replace(char s[],char c1,char c2){

if(s[0]=='\0'){
	return;

}

if (s[0]!=c1){

replace(s+1,c1,c2);
}

else{

s[0]=c2;

//replace(s+1,c1,c2);
}


}




int main(){

char s[100];
char c1,c2;
cout<<"enter string::"<<endl;
cin>>s;

cout<<"enter character which u wanna replace"<<endl;
cin>>c1;
cout<<"enter character which u wanna replace with"<<endl;
cin>>c2;

replace(s,c1,c2);

cout<<"string after replacing:::"<<s<<endl;

//cout<<"string length after removal of x::"<<strlen(s)<<endl;


}
