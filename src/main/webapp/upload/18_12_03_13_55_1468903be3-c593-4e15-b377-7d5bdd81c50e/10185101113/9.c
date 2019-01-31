#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[81],target[81];
    int appear=-1,count=0,j;
    gets(str);
    scanf("%s",target);
    for (int i=0;i<=strlen(str)-strlen(target);i++)
    {
        int now=i;
        for(j=0;j<strlen(target);j++,now++)
        {
            if(str[now]!=target[j])
            break;
        }
        if(j==strlen(target))
        {
            count++;
            if(count==1)
                appear=i;
        }
    }
    printf("%s: %d time(s), first at %d",target,count,appear);
    return 0;
}