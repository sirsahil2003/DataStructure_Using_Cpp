#include<iostream>

using namespace std;


int xpowern(int a, int b){
 if(b==0){
 	return 1;
 	}
   
   return a*(xpowern(a,b-1));
 
 			}
 			
 int main() { 
 
 int x,y;
 cin>>x;
 cin>>y;
 
 int output=xpowern(x,y);
 cout<<output<<endl;
 
 
 
 
 
 
 
 
 
 /*
 //loop approach
 
 int var=1;
 int x,n,i;
 cin>>x;
 cin>>n;
 
 
 for(i=0;i<n;i++){
 	var=var*x;
 	        }
 cout<<var;
 */
 
 
 }
