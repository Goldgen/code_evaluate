
#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[80],ch2[80];
    int a,b,j,k,l,x=1;
    scanf("%s %s",ch1,ch2);
    a=strlen(ch1);
    b=strlen(ch2);
    if(a==b)
    {

            for(j=0;j<a;j++)
            {
                if(ch1[0]==ch2[j])
                {
                    x=1;
                    for(k=1,l=j+1;k<a&&l<a;k++,l++)
                    {
                        if(ch1[k]!=ch2[l])
                            x=0;
                    }
                    if(k<a&&l==a)
                    {
                        l=0;
                        for(;k<a&&l<a;k++,l++)
                        {
                        if(ch1[k]!=ch2[l])
                            x=0;
                        }
                    }

                }
                else
                    x=0;
                if(x==1)
                    break;
            }

    }
    else
        x=0;
    if(x==1)
        printf("\"%s\" is a rotation of \"%s\"",ch1,ch2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",ch1,ch2);
    return 0;
}
