#include<stdio.h>
#include<string.h>

int main()
{
    int line=0;
    scanf("%d",&line);
    getchar();
    char a[line][101];

    for(int i=0; i<line; i++){
        gets(a[i]);
    }
    for(int i=0; i<line; i++){
        for(int j=0; j<strlen(a[i]); j++){
            a[i][j]++;
            if(a[i][j]=='[')
                a[i][j]='A';
            else if(a[i][j]=='{')
                a[i][j]='a';
        }
        printf("case #%d: %s\n",i,a[i]);
    }
}
