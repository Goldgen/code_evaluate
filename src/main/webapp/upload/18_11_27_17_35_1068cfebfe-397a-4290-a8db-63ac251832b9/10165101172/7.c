#include <stdio.h>
int a[100];

int main(void){
    int i,num,T;
    int flag = 0;
    scanf("%d",&T);
    for (i = 0;i < T;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for (i = 0;i < T;i++)
        if (a[i] == num){
            if (flag != 0)
                printf(" ");
            printf("%d",i);
            flag = 1;
        }
    if (flag == 0)
        printf("ERROR");
    return 0;
}
