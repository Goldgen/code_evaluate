#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[82] = "\0";
    fgets(str,82,stdin);
    int i = 0;
    for(i=0;i<(strlen(str))/2;i++)
    {
        if(str[i]!=str[strlen(str)-2-i])
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
