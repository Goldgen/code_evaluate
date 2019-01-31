#include <stdio.h>
#include <stdlib.h>
void ni(void){
    int n;
    static t=0;
    scanf("%d",&n);
    if(n<=0)
        return;
    ni();
    if(t)
        printf(" ");
    t++;
    printf("%d",n);
}
int main()
{
    ni();
}
