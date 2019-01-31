#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,x=0,y;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        char words[50];
        scanf("%s",words);
        printf("case #%d: ",j);
        x=strlen(words);
        for(y=0;y<x;y++)
        {
            if(words[y]!='Z') words[y]=words[y]+1;
            else if(words[y]=='Z') words[y]='A';
        }
        printf("%s",words);
		puts("");
    }
    return 0;
}
