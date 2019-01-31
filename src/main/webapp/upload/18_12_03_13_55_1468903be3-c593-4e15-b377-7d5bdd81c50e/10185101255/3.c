#include <stdio.h>
#include <string.h>

int main()
{
    char s1[85];
    char s2[85];
    
    scanf("%s %s", s1, s2);
    
    if (strcmp(s1, s2) <= 0)
    {
        for (size_t i = 0; i < strnlen(s1,sizeof(s1)); i++)
        {
            printf("%c", s1[i]);
            printf("%c", s2[i]);
        }
        
        for (size_t i = strnlen(s1,sizeof(s1)); i < strnlen(s2,sizeof(s2)); i++)
        {
            printf("%c", s2[i]);
        }
    }
    
    if (strcmp(s1, s2) > 0)
    {
        for (size_t i = 0; i < strnlen(s2,sizeof(s2)); i++)
        {
            printf("%c", s1[i]);
            printf("%c", s2[i]);
        }
        
        for (size_t i = strnlen(s2,sizeof(s2)); i < strnlen(s1,sizeof(s1)); i++)
        {
            printf("%c", s1[i]);
        }
    }
    return 0;
}

