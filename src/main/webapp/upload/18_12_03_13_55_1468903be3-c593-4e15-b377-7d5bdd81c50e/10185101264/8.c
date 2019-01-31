#include <stdio.h>
#include <string.h>
int isPalindrome(char * str)
{
    int flag = 0, n = strlen(str);

    for(int i = 0; i < n / 2; i++)
        if(str[i] == str[n - i - 1])
            flag++;

    if(flag == n / 2)
        return 1;
    return 0;
}
int main()
{
    char str[81];
    gets(str);

    if(isPalindrome(str))
        printf("True");
    else
        printf("False");
}