#include <stdio.h>

void output();
int main()
{
    output();
    return 0;
}
void output(){
    int n;
    static count=0;
    scanf("%d",&n);
    if(n>0){
        output();
        if(count==0)
            printf("%d",n);
        else
            printf(" %d",n);
        count++;
    }
}