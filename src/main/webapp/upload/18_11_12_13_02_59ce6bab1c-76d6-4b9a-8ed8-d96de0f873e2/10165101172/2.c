#include <stdio.h>
#include <ctype.h>

int main(void){
    int a,b,i;
    int flag = 0;
    scanf("%d %d",&a,&b);
    for (i = a;i <= b;i++){
        if (isgraph(i)){
            if (flag != 0)
                printf("\n");
            flag = 1;
            printf("%-3d     %c",i,i);
        }
    }
    if (flag == 0)
        printf("NONE");
    return 0;
}

