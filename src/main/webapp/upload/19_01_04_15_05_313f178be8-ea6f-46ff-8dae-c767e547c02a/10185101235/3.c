#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[1001];
    char b[1001];
    int n = 0;


    char* ptr = a;
    scanf("%s",a);
    int lenA = strlen(a);
    int lenB = strlen(b);
    while(strcmp(a,"#")!=0)
    {
        scanf("%s",b);
        lenB = strlen(b);
        for(ptr=a;ptr<a+lenA;ptr++)
        {
            if(strncmp(ptr,b,lenB)==0)
            {
                n++;
                ptr += lenB-1;
            }
        }
        printf("%d\n",n);
        n=0;
        scanf("%s",a);
        lenA = strlen(a);
    }
}
