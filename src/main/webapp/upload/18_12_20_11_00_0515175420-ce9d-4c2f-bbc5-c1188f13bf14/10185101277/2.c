#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE1 202
#define SIZE2 200

int i;
void output(char arr[])
{
    char *p[SIZE2];
    char b[SIZE1];
    int j=0,k;
    p[0]=arr;
    int len=strlen(arr);
    for(k=0;k<len;k++){
        while(1){
            if(arr[i]==' ')
                p[++j]=&arr[i+1];
            i++;
        }
    }
    int j1=j+1;
    for(j=0;j<j1-1;j++){
        if(isalpha(*p[j])==0)
            continue;
        for(i=1;i<j1;i++){
            if(isalpha(*p[i])==0)
                continue;
            if(strcmp(*p[i],*p[j])<0){
                strcpy(b,*p[i]);
                strcpy(*p[i],*p[j]);
                strcpy(*p[j],b);
            }

        }
    }
    for(j=0;j<j1;j++){
        printf("%s",*p[j]);
    }


}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[SIZE1][n];
    for(i=0;i<n;i++){
        gets(str[i]);
        printf("case #%d:\n",i);
        output(str[i]);
    }
    return 0;
}