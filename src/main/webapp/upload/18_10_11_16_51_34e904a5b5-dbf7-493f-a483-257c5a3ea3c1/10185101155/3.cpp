#include <stdio.h>
int main()
{
    int num;
    int a, b;
    scanf("%d\n",&num);
    a = num/10;//a是十位
    b = num - a*10;//b是个位
    printf("%d %d",b ,a );
    return 0;
    
    

 
}
