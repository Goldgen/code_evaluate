
#include <stdio.h>
int a[100];

int main(void){
    int T;
    int i;
    int sign,num;
    scanf("%d",&T);
    for (i = 0;i < T;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&sign,&num);
    for (i = T;i > sign;i--){
        a[i] = a[i - 1];
    }
    a[sign] = num;
    for (i = 0;i <= T;i++){
        printf("%d",a[i]);
        if (i != T)
            printf(" ");
    }
    return 0;
}
