#include <stdio.h>
int main()
{
    float amounts[5];
    long dollars[5];
    long cents[5];
    for(int x=0;x<5;x++)
        scanf("%f",&amounts[x]);
    for(int x=0;x<5;x++)
    {
        dollars[x]=(long)amounts[x];
        cents[x]=(long)(100*amounts[x]-100*dollars[x]);
    }
    for(int x=0;x<5;x++)
    {

        printf("$%ld.",dollars[x]);
		if(cents[x]<10)
			printf("0");
		printf("%ld",cents[x]);
        if(x<4)
            printf(" ");
    }
    return 0;
}