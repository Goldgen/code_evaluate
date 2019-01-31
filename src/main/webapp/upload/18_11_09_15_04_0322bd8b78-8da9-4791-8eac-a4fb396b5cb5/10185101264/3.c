#include <stdio.h>
#include <string.h>
int main()
{
    char word[20];
    char str[6]={'a','e','i','o','u'};
    int t,i,j;
    gets(word);
    for(i=0;i<20;i++)
    {
        t=0;
        for(j=0;j<5;j++)
        {
            if(word[i]==str[j]||word[i]==(str[j]-32))
            {
                printf("yes");
                t=1;
                break;
            }
        }
        if(t==1)
            break;
    }
    if(t==0)
        printf("no");
}