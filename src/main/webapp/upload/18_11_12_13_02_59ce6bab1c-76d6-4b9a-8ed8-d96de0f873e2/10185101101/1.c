#include <stdio.h>
#include <stdlib.h>

void multi(int num){
    int i,j;
    for(i=1;i<=num;++i){
        for(j=1;j<=i;++j){
 
            printf(" %d * %d =%3d",j,i,i*j);

        }printf("\n");
    }

}

int main()
{
    int number;
    scanf("%d",&number);
    multi(number);

    return 0;
}
