#include<iostream>

using namespace std;

int countzeros(int n){
int m=n%10;
int count;
if(n==0){
   return 0;
}

if(m==0){

 return 1+countzeros(n/10);

}

else{

return countzeros(n/10);
}

}




int main()
{

int n;
cout<<"enter n"<<endl;
cin>>n;
cout<<"num of zeros are::"<<endl;
cout<<countzeros(n)<<endl;





//recursive approach
/*
int n,m,count=0;
cout<<"enter a num"<<endl;
cin>>n;
while(n!=0){
m=n%10;
if(m==0){
	n=n/10;
	count++;
        }
else {
n=n/10;

}

         }
cout<<"number of zeros::"<<count<<endl;
*/

}
