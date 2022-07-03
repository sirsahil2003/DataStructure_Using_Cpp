#include <iostream>
using namespace std;

#include "StackUsingLL.cpp"


int isStringBalanaced(){

Stack<char> ss;
char a;
string s;
cin>>s;

for(int i=0;s[i]!='\0';i++){

if(s[i]=='{' || s[i]=='(' || s[i]=='[' ){
ss.push(s[i]);
}

if(ss.isEmpty()){     //if we have only closing brackets then in this case it will remain empty so handle that 
return 0;
}

switch(s[i]){

case '}':
	a = ss.top();
	ss.pop();
	
	if(a == '(' || a == '[')
		return 0;
	break;

case ')':
	a = ss.top();
	ss.pop();
	
	if(a == '{' || a == '[')
		return 0;
	break;
	
case ']':
	a = ss.top();
	ss.pop();
	
	if(a == '(' || a == '{')
		return 0;
	break;
	 	
}


}
return 1;



}

int main(){

int res = isStringBalanaced();

res==0?cout<<"Not Balanced!":cout<<"Balanced!";

}






