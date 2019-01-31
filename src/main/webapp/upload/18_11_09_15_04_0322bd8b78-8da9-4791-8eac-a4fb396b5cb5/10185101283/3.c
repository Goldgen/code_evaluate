#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int i=0;
    int b=strlen(a);
    while(i+1<=b)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
           {
               printf("yes");
            break;
           }
        else
        {
            printf("no");
            break;
        }
        ++i;
    }
    return 0;

}