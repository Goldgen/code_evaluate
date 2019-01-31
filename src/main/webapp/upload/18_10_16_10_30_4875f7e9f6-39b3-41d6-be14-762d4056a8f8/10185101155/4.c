#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a >=65&&a <=90)
    {
        a = a + 32;
        printf("%c",a);
    }
    else
    {
        printf("ERROR");
    }
    return 0;

}
