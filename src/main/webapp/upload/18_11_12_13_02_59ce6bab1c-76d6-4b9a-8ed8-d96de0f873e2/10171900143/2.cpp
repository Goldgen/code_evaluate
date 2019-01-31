#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void m(int ,int);

int main()
{
    int n,nn;
    scanf("%d %d",&n,&nn);int ret=0;
    for(int i=n;i<=nn;i++){
        if (isgraph(i)){if(ret==1)printf("\n");
                printf("%-3d     %c",i,i);
                ret=1;
                
    }
    }
    if(ret==0)printf("NONE");

    return 0;
}

void m(int a, int b){
    printf(" %d * %d =%3d",a,b,a*b);
}


