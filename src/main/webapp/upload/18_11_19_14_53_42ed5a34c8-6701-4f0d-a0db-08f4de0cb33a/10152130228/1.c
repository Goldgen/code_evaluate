#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
	float a[100];
    while(1){
        float k;
        scanf("%f", &k);
        if(k==-1) break;
        float sum=0;
        float avg;
        a[n++]=k;
        for(int i=0; i<n; i++) sum += a[i];
        avg = sum/n;
        printf("%.2f\n", avg);
    }
    return 0;
}
