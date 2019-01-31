#include <stdio.h>
int main()
{

    float amounts[10];
    long dollars[10],cents[10];
    for (int i=0;i<5;i++){
        scanf("%f",&amounts[i]);
        dollars[i]=amounts[i];
        cents[i]=(int)(100*(amounts[i]-dollars[i]+1e-5));
    }
    printf("$%d.",dollars[0]);
    if(cents[0] < 10)
        printf("0");
    printf("%d", cents[0]);
    for(int i=1;i<5;i++){
        printf(" $%d.",dollars[i]);
        if(cents[i] < 10)
            printf("0");
        printf("%d", cents[i]);
    }
    return 0;
}
