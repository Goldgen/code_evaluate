#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];
    int i,a=1,j=0;
    for(i=0;i<n;i++){
        scanf("%d",&Arr[i]);
        if(Arr[i]==Arr[i-1]){
        a++;}
        else {
        a=1;}
        if(a>j) j=a;}
    printf("%d",j);
    return 0;
}
