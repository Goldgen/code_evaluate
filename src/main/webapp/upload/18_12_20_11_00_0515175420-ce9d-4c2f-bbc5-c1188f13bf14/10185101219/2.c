#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int strisalp(char* d)
{
    int tag=0;
    for(int i=0;i<strlen(d);++i)
    {
        if(isalpha(d[i]))
            tag++;
    }
    if(tag==strlen(d))
        return 1;
    else
        return 0;
}
//accept
void sort(char x[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(x[j],x[j+1])>0){
                    if(strisalp(x[j])&&strisalp(x[j+1])){
                char t[100];
                strcpy(t,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],t);
                    }
                    else
                    continue;
            }
        }

    }
}

int main()
{
    int T,k;
    scanf("%d",&T);
    getchar();
    for(int i=0;i<T;++i)
    {
        int k=0,tag=0;
        char a[50][50];
        while(1){
            a[tag][k]=getchar();
            if(a[tag][k]=='\n')
                break;
            if(a[tag][k]!=' ')
                k++;
            if(a[tag][k]==' '){
                a[tag][k]='\0';
                tag++;
            }
        }
        a[tag][k]='\0';
        printf("case #%d:\n",i);
        sort(a,tag);
        printf("%s",a[0]);
        for(int j=1;j<=tag;j++)
            printf(" %s",a[j]);
        printf("\n");
    }
    return 0;
}
