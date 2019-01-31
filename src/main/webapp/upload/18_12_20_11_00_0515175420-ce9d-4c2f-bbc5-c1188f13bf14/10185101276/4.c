#include <stdio.h>
int main()
{
    char a[1000] = {'0'};
    char *pa = a;
    while(1 == scanf("%c",pa) && *pa != '?') pa++;
    for ( --pa ; pa >= a ; pa--){
        printf("%c", *pa );
    }
    return 0;
}
