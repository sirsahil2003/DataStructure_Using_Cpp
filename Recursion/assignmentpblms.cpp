#include<iostream>

using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << endl;
        return;
    }
    print(n --);
    cout << n << endl;
}


int xpowern(int a, int b){
 if(b==0){
 	return 1;
 	}
   
   return a*(xpowern(a,b-1));
 
 			}
 			
 int main() { 
 
 
 int num=3;
 print(3);
 
 
 
 
 
 
 
 /*
 
 int x,y;
 cin>>x;
 cin>>y;
 
 int output=xpowern(x,y);
 cout<<output<<endl;
 */
 
 
 
 
 
 
 
 
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
