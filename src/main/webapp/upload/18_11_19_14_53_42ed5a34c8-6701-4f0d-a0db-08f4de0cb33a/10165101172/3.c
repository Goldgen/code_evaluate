#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[100];
    int i,n;
    for (i = 0;scanf("%d",&a[i]) == 1;i++){
        if (a[i] <= 0)
			break;
    }
    n = i;
    for (i = n - 1;i >= 0;i--){
        printf("%d",a[i]);
        if (i != 0)
            printf(" ");
    }
    return 0;
}
