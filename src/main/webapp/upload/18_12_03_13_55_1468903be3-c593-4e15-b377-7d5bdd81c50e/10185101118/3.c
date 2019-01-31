#include<stdio.h>
#include<string.h>
int main()
{
    char a[81],b[81],*a1,*b1;
    scanf("%s %s",a,b);
    int c,d,i,x,y;
    x=strlen(a);
    y=strlen(b);
    c=(x<y)?x:y;
    d=(x>y)?x:y;
    a1=a;
    b1=b;
    for (i=0; i<c; i++)
        printf("%c%c",*a1++,*b1++);
    for (; i<d; i++)
    {
        if (x>y) printf("%c",*a1++);
        else if (y>x) printf("%c",*b1++);
        else break;
    }
    return 0;
}
