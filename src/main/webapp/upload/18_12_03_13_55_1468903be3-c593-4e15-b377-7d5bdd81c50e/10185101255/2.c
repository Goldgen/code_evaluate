#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i,j,n = 0;
    char temp[35];
    scanf("%d", &n);
    char str[n][35];
    getchar();
    
   
    for (i = 0; i < n; i++)
        fgets(str[i],sizeof(str[i]),stdin);
    
    if (n == 1)
        printf("%s", str[0]);
    else
    {
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n + 1; j++)
        {
            if(strcmp(str[i], str[j]) < 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%s", str[i]);
    }
    }
    return 0;
}
