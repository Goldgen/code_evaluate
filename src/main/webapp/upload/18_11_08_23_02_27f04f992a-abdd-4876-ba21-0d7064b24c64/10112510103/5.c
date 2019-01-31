#include <stdio.h>
#include <math.h>
#include <string.h>

#include <stdlib.h>
#define pi 3.1415927

int n;
int main(){
    scanf("%d",&n);

        if (n==0)
        {
            printf("%d",1);

        }else{
        int ans=1;
		int i;
        for(i=1;i<=n;i++)
        {
            ans *= i;
            ans %= 20181111;
        }
        printf("%d",ans);
        }

    return 0;
}