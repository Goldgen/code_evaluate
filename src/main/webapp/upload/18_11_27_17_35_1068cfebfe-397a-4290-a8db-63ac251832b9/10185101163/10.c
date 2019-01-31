#include <stdio.h>
#include <stdlib.h>
void MP(int n,int Arr[n]){
    int i,t,count;
      for(i=0;i<n-1;i++){
        if(Arr[i]>Arr[i+1]){
            t=Arr[i+1];
            Arr[i+1]=Arr[i];
            Arr[i]=t;
        }}
        count=0;
      for(i=0;i<n-1;i++){
        if(Arr[i]>Arr[i+1]) count++;
      }
      if(count>0) MP(n,Arr);
}
int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&Arr[i]);
    MP(n,Arr);
    for(i=0;i<n;i++){
        printf("%d",Arr[i]);
        if(i<n-1) printf(" ");
    }
    return 0;
}
