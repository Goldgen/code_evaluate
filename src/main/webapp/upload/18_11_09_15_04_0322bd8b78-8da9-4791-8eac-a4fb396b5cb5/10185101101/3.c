#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];int i,k;
    scanf("%s",str);
    k=0;
    for(i=0;i<strlen(str);++i)
    {
        if(str[i]==65||str[i]==69||str[i]==73||str[i]==79)
        {printf("yes");++k;break;}
        else if(str[i]==85||str[i]==97||str[i]==101||str[i]==105)
        {
            printf("yes");++k;break;
        }
        else if(str[i]==111||str[i]==117)
        {
            printf("yes");++k;break;
        }

    }
    if(k==0)printf("no");

    return 0;
}
