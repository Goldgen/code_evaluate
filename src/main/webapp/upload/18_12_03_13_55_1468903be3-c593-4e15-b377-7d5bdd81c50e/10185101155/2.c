#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    char str[t][31];
    char swap[31];
    for(int x=0;x<t;x++)
        gets(str[x]);
    for(int i=0;i<t;i++)
        for(int j=0;j<i;j++)
    {
        if (strcmp(str[i],str[j])>0)
        {
           strcpy(swap,str[i]);
           strcpy(str[i],str[j]);
           strcpy(str[j],swap);
        }
    }
    for(int x=0;x<t;x++)
        printf("%s\n",str[x]);

    return 0;
}