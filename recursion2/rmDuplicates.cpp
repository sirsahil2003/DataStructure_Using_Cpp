#include<iostream>
#include<cstring>
using namespace std;

int main()
{

char c[] = "saahhiiil";
char* e=c;
int j;
for(int i=0;i<strlen(c);i++)
{      
	if(c[i]==c[i+1])
	{  
	   
	   for(int j=0;j!='\0';j++){
	   c[j+1]=c[j+2];
	   
	    }
	  
	    
	    }
	 else{
	  
	  continue;
	 
	 }
	 
	
	  
	  
	
	
	
	}
	
for(int i=0;i<strlen(c);i++){      
cout<<c[i]<<" ";
}

}








