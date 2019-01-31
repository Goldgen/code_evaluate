#include <stdio.h>
#include <stdlib.h>

void convert(int m)
{
    int i;
    char c;
    if((i=m/10)!=0)   //??n??????
        convert(i);   //?????????convert???????
    c=m%10+'0';
    printf("%c", c);
}

int main()
{
    int m;
    scanf("%d", &m);
    convert(m);
    return 0;
}

