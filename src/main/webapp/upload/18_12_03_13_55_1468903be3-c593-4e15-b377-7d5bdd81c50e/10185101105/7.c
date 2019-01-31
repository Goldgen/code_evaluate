
#include <stdio.h>
#include <string.h>



int main()
{
    char str[100][80];
    int i,j=0;
    for(i=0;;i++)
    {
        scanf("%s",str[i]);
        {
        if(str[i]=='\n')
            break;
        }
        j++;

    }
    int a,x,b,y;
    int num[100];
    for(a=0;a<j;a++)
    {
        num[a]=strlen(str[a]);
    }
    x=num[0];
    for(b=0;b<j;b++)
    {
        if(x<num[b])
            {
                x=num[b];
                y=b;
            }
    }
    printf("%s",str[b]);
    return 0;
}
