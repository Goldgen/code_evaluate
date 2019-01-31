#include <stdio.h>
#include <string.h>

int main()
{
    char string[100]={0};
    int length[20]={0}, position[20]={0};
    int i, j, k, flag, max;
    j=0;
    k=0;
    flag=0;
    gets(string);

    for(i=0; i<100; i++)
    {
        if(string[i]==' '||string[i]==0 )
        {
            position[j]=i-1;
            j++;
            if(j==1)
            {
                length[k]=position[0]+1;
                k++;
            }
            else
            {
                length[k]=position[j-1]-position[j-2]-1;
                k++;
            }
        }
        if(string[i]==0)
        {
            break;
        }

    }
    max=length[0];

    for(i=0; i<k; i++)
    {
        if(max<length[i])
        {
            max=length[i];
            flag=i;
        }
    }

    for(i=position[flag]-max+1; i<(position[flag]+1); i++)
    {
        printf("%c",string[i]);
    }


    return 0;
}
