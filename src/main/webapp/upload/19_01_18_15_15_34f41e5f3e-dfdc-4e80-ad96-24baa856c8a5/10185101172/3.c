#include<stdio.h>
#include<math.h>

int prime(int n){    
int i=2;    
while(i<=sqrt(n))        
if(n%i++==0) 
return 0;   
 return 1;}
 
 int main(){    
 int i,n;    
scanf("%d",&n);
 printf("%d",n) ;          
 for(i=2;i<=n/2;i++)        
 {            
 if(prime(n-i)&&prime(i))           
  {                
  printf("=%d+%d",i,n-i);                           
  }        
  }   
	  return 0;
	  }