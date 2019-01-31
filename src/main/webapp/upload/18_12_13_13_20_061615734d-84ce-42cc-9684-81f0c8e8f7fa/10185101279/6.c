#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void rotate(int* p, int n, int m);
int main(){
 int n,m,i;
 int p[11];
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    rotate(p,n,m);
for(i=0;i<n;i++){
        if(i<n-1)
    printf("%d ",*(p+i));
else
    printf("%d",*(p+i));
}
	return 0;
}
void rotate(int* p, int n, int m){
int i=0;


int temp[n];
for(i=0;i<n;i++){
    temp[i]=*(p+i);
       }
for(i=0;i<n;i++){
    if((i+m)<n)
        *(p+i+m)=temp[i];
      else
        *(p+i+m-n)=temp[i];



}
}
