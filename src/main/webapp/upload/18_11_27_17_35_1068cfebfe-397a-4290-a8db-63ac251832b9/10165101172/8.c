#include <stdio.h>
int a[100];

int main(void){
    int i,T;
    int sum = 1,copy_sum = 1;
    scanf("%d",&T);
    for (i = 0;i < T;i++){
        scanf("%d",&a[i]);
    }
    for (i = 1;i < T;i++){
        if (a[i] == a[i - 1] && i != T - 1)
            sum++;
        else if (a[i] == a[i - 1] && i == T - 1){
            sum++;
            copy_sum = (sum > copy_sum)?sum:copy_sum;
            sum = 1;
        }
        else
            {
            copy_sum = (sum > copy_sum)?sum:copy_sum;
            sum = 1;
        }
    }
    printf("%d\n",copy_sum);
    return 0;
}
