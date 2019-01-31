#include <stdio.h>

int main()
{
    int s1=0;
    int s2=0;
    int i,j;
    for(i=1;i<=100;i+=2){
        s1+=i;
    }
    for(j=2;j<=100;j+=2){
        s2+=j;
    }
    printf("%d %d",s1,s2);
    return 0;
}
