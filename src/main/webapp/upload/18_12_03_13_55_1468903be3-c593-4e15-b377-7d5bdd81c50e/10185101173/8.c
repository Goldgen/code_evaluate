#include <stdio.h>
#include <string.h>

int main()
{
    char a[100]= {0};
    int i = 0;
    int len = 0;
    gets(a);
    len = strlen(a);
    for(i = 0; i < (len / 2); i++)
        {
            if(a[i] != a[len - 1 - i])
            {
                printf("False\n");
                return 0;
            }
        }
    printf("True\n");
    return 0;
}
