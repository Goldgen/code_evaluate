#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char Arr[n][30];
    char T[30];
    int i,j;
    for(i=0;i<=n;i++) gets(Arr[i]);
    for(i=0;i<n/2;i++){
        for(j=0;j<n-1;j++){
        if(strcmp(Arr[j],Arr[j+1])<0){
            strcpy(T,Arr[j]);
            strcpy(Arr[j],Arr[j+1]);
            strcpy(Arr[j+1],T);
        }}
    }
    for(i=0;i<=n;i++) puts(Arr[i]);
    return 0;
}
