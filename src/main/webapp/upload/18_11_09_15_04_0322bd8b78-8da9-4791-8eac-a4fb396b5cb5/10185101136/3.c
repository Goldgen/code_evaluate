#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a;
    bool flag = false;
    while ((a = getchar()) != EOF){
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            flag = true;
            break;
        }
    }
    if (flag)
        printf("yes");
    else
        printf("no");
    return 0;
}
