#include<iostream>
#include<cstring>

using namespace std;

void removeX(char s[]){

if(s[0]=='\0'){
	return;

}

if (s[0]!= 'x'){

removeX(s+1);
}

else{
int i=1;

for(;s[i]!='\0';i++){

  s[i-1]=s[i];

}
s[i-1]=s[i];  //for null character to push 1 pose back
removeX(s);
}


}



int length(char s[]){

if(s[0]=='\0'){
	return 0;
	
	}
	
int smallString=length(s+1);

return 1+smallString;




}



int main(){

char s[100];
cout<<"enter string::"<<endl;
cin>>s;
int l=length(s);
cout<<"len of the given string is:::"<<l<<endl;

removeX(s);
cout<<"string after removal of x:::"<<s<<endl;
cout<<"string length after removal of x::"<<strlen(s)<<endl;


}
