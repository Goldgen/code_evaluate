#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num;
    num=pow(2,n);
    int i=0,p;
    while(i<num){
        printf("{");
        p=i;
        int j=0;
        while(p){
            if(p%2!=0)
            printf("%d",j);
            if(p/2!=0 && p%2!=0)
                printf(",");
            p/=2;
            j++;
        }
        printf("}");
        if(i!=num-1)
            printf("\n");
        i++;
    }
    return 0;
}
