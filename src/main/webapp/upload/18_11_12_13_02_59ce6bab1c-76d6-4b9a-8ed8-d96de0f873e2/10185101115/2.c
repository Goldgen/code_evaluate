#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void num_to_char(int,int);

int main()
{int st,ed;
scanf("%d %d",&st,&ed);
num_to_char(st,ed);
    return 0;
}
void num_to_char(int st,int ed)
{for(int a=st;a<=ed;a++)
{
    if((a<=127)||(ed>127))
    {
        if(a>=100)
        {
            if(a!=ed)
            {
                printf("%d     %c\n",a,a);
            }
            else if(a==ed)
            {
                printf("%d     %c",a,a);
            }
        }
        else if((a>=32)&&(a<100))
        {
            if(a!=ed)
            {
                printf("%d      %c\n",a,a);
            }
            else
            {
                printf("%d      %c",a,a);
            }
        }
    }
}
if(ed<=31)
    {
        printf("NONE");
    }
    return 0;
}
