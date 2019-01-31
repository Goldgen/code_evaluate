
#include <stdio.h>
#include <string.h>



int main()
{
    char ch[80];
    int n,i,k,x=0;
    gets(ch);
    n=strlen(ch);
    k=n;
    for(i=0;i<n;i++)
    {
        k--;
        if(ch[i]!=ch[k])
        {
            x=1;
            break;
        }
    }
    if(x=0)
    printf("True");
    else
        printf("False");
    return 0;
}
