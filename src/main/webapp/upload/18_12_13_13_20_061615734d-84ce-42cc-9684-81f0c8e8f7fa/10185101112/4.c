#include <stdio.h>
#include <string.h>


int main(){
    int t;
    scanf("%d\n",&t);
    char str[t][60];
    int i;
    for (i=0;i<t;i++)
    {
        gets(str[i]);
        int j=0;
        for (;j<strlen(str[i]);j++)
        {
            if (str[i][j]=='Z')
            str[i][j]='A';
            else
            str[i][j]+=1;
        }
    }
    int k=0;
    for (;k<t;k++)
    {
        printf("case #%d: ",k);
        puts(str[k]);
    }
    return 0;
}
