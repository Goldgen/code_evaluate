#include <stdio.h>
int a[100];

int main(void){
    int i,num,T,j;
    int flag = 0;
    scanf("%d",&T);
    for (i = 0;i < T;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for (i = 0;i < T;i++)
        if (a[i] == num){
            for (j = i;j < T - 1;j++)
                a[j] = a[j+1];
            flag = 1;
            break;
        }
    if (flag == 0)
        printf("ERROR");
    else
        for (i = 0;i < T - 1;i++){
            printf("%d",a[i]);
            if (i != T - 2)
                printf(" ");
    }
    return 0;
}
