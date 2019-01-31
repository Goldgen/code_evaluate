#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    char a;
    int d=0;
    a=getchar();
    if(a!='\n')
    {
    a=tolower(a);
    switch(a)
    {
    case 'a': d==1;
    break;
    case 'e': d==1;
    break;
    case 'i': d==1;
    break;
    case 'o': d==1;
    break;
    case 'u': d==1;
    break;
    }
    a=getchar();
    }
    if(d==1)
        printf("yes");
    else
        printf("no");
    return 0;
}