#include <stdio.h>
#include <math.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>'A'&&a<'Z'){
        printf("%c",a+32);
    }else{
        printf("??????????");
    }
}