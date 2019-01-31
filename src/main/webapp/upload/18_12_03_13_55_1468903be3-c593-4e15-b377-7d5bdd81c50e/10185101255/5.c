#include <stdio.h>
#include <string.h>

int main()
{
    char s1[85];
    char s2[85];
    char temp[85];
    int s = 0;
    int count = 0;
    
    scanf("%s %s", s1, s2);
    
    for (size_t i = 0; i < strnlen(s2, sizeof(s2)); i++)
    {
        count = 0;
        for (size_t j = i; j < strnlen(s2, sizeof(s2)); j++)
        {
            temp[count] = s2[j];
            s = ++count;
        }
        
        for (size_t j = 0; j < i; j++) {
            temp[s] = s2[j];
            s++;
        }
        
        if (strcmp(s1, temp) == 0)
        {
            printf("\"%s\" is a rotation of \"%s\"", s1, s2);
            return 0;
        }
    }
    
    printf("\"%s\" is NOT a rotation of \"%s\"", s1, s2);
    
    return 0;
}

