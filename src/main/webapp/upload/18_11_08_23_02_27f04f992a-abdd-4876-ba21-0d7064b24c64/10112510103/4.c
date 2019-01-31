#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define pi 3.1415927

int main()
{
    char ch;

    //int i;
    while((ch=getchar())!=EOF)
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
           ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("yes");
            return 0;
        }

    printf("no");
    return 0;
}