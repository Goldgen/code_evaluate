#include<stdio.h>
#include<string.h>
#include<memory.h>
int main()
{
    int i;
    for(i=0;i<9;i+=3)
        if(i==0)
        printf("6 ");
        else
            printf("%d6 ",i);
    printf("96");
    return 0;

}
