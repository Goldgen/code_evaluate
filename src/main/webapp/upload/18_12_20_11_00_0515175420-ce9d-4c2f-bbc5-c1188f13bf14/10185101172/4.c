#include <stdio.h>
#include <string.h>

int main()
{
    char* p=NULL;
    int i=0;
    order(p,i);
    return 0;
}

void order(char* p,int i)
{
    int j=0;
    void order(char* p,int i);
    for(;j<1;j++)
    {
       if(*(p+i)=getchar()!='?')
         order(p,++i);
        else
            break;
        printf("%c",*(p+i-1));
    }
}
