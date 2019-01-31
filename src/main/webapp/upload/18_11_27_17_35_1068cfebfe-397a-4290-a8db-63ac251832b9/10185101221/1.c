#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr[5];
    double arr1[5];
    double sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%lf",&arr[i]);
        arr1[i]=1.0/arr[i];
        sum+=arr1[i];
    }
    for(int i=0;i<5;i++){
		if(i==4)
        printf("%.2lf",arr1[i]);
		else
			printf("%.2lf ",arr1[i]);
	}
    printf("\n%.6lf",sum);

    return 0;
}
