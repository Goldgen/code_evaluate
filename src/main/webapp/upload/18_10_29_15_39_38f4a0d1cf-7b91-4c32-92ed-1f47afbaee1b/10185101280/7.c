
#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
int z[1000];
int n=0,m=0;

    while(a){
    b=a%2;a=a/2;
        z[++n]=b;}
for(int i=1;i<=n;i++){
if(z[i]==1)
   m++;
}

    printf("%d",m);

}