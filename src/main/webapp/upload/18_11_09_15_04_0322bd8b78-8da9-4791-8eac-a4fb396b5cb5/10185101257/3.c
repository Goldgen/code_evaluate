#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        if(tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u')
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");
    return 0;
}
