#include <stdio.h>
#include <stdlib.h>

void loop(int string[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++)
{if(string[j]>string[j+1])
{temp=string[j];
string[j]=string[j+1];
 string[j+1]=temp;
 }
}}}
int main()
{   int i,n;
    scanf("%d",&n);
   int arry[n];
   for(i=0;i<n;i++)
   scanf("%d",&arry[i]);
    loop(arry,n);
    for(i=0;i<n;i++){
    if(i==0)
    printf("%d",arry[i]);
    else
    printf(" %d",arry[i]);}
    return 0;
    }