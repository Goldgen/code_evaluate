#include <stdio.h>
#include <stdlib.h>

void Tobina(int a)
{
    if(a/2==0)
        {
            printf("%d",a%2);
            return;
        }
    Tobina(a/2);
    printf("%d",a%2);

    return;
}

int main()
{
    int num = 0;
    scanf("%d",&num);
    Tobina(num);
    return 0;
}
