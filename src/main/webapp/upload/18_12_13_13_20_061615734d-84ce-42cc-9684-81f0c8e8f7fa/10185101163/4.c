#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,T;
    scanf("%d",&T);
    char Arr[T][51];
    for(i=-1;i<T;i++)
        {gets(Arr[i]);}
    for(i=0;i<T;i++){
        for(j=0;j<strlen(Arr[i]);j++){
            if((Arr[i][j]>='A')&&(Arr[i][j]<'Z'))
                       Arr[i][j]=Arr[i][j]+1;
            if(Arr[i][j]=='Z') Arr[i][j]='A';
        }}
    for(i=0;i<T;i++){
        printf("case #%d: %s",i,Arr[i]);
        if(i<T-1) printf("\n");
    }

    return 0;
}
