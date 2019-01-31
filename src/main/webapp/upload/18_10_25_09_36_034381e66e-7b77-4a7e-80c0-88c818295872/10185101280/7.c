
#include<stdio.h>
int main()
{
int i,j,p;
int n;
scanf("%d",&n);
if(n<100&&n>=7&&n%2!=0)
{
    for(i=0;i<(n+1)/2;i++)
{
    for(j=(n+1)/2-1;j>i;j--){
    printf(" ");}

for(j=0;j<2*i+1;j++){
        if(j==0||j==2*i||i==0||i==(n+1)/2-1){
    printf("*");
}
else printf(" ");}

if(i!=(n+1)/2-1)
    printf("\n");

}

}


    return 0;
}
