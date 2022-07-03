#include <iostream>
using namespace std;
int main(){

int arr1[2][2] ={1,2,3,4};
int arr2[2][2] ={1,2,3,4};
int arr3[2][2];
int sum=0;

int i,j;
for(i=0;i<=1;i++){
    int z=0; sum=0;
  for(j=0;j<=1;j++){
     
     
     int x=arr1[i][j];
     int y=arr2[j][i];
     
     int z=z+x*y;
     sum=sum+z;
     
     
     arr3[i][j]=z;
     
      }
        }
        
 for(i=0;i<=1;i++){
    int z=0;
  for(j=0;j<=1;j++){
     
     
     cout<<arr3[i][j]<<endl;

     }
        }
        }

