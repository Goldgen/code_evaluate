#include<stdio.h>
int main()
{
    char one;
    scanf("%c",&one);
    if((one>=65)&&(one<=90))
        {
            one=one+'a'-'A';
            printf("%c",one);
        }
    else
        printf("ERROR");
    return 0;
}
