#include <stdio.h>
#include <stdlib.h>

void func(){
    int n;
    static int i=0;
    scanf("%d",&n);
    if(n>0){
        ++i;
        func();
        }
    else
        return;
    printf("%d",n);
    --i;
    if(i!=0)
        printf(" ");
}

int main()
{
    func();
    return 0;
}
