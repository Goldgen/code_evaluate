#include <stdio.h>
int main()
{
    int i;
    float amounts[5];
    long dollars[5],cents[5];
    for (i=0;i<5;i++){
        scanf("%f",&amounts[i]);
        dollars[i]=amounts[i];
        cents[i]=(int)(100*(amounts[i]-dollars[i]+0.00001));
    }
    for(i=0;i<5;i++){
        printf("$%ld.",dollars[i]);
        if(i==4) {
            if(cents[i]>=10)
                printf("%ld",cents[i]);
            else printf("0%ld",cents[i]);
        }
        else {
            if(cents[i]>=10)
                printf("%ld ",cents[i]);
            else printf("0%ld ",cents[i]);
        }
    }
    return 0;
}
