#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%d",num);
    int a,b;

    int n;int i;int j;
    for(n=3;n<=num/2;n+=2){
        for(i=2;i<=n/2+1;i++){
            if(n%i!=0){
                if(i<n/2) continue;
                else{
                    a=n;
                    b=num-a;
                    for(j=2;j<=b/2+1;j++){
                        if(b%j!=0){
                            if(j<b/2+1) continue;
                            else{
                                printf("=%d+%d",a,b);
                            }
                        }
                        else break;
                    }
                }
            }
			break;
        }

    }
    return 0;
}
