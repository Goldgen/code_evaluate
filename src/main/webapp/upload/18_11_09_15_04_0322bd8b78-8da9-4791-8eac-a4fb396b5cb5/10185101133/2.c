#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    scanf("%d",&n);
        int i=1;
        while(i<=n){
            int k=2*(n-i);
            while(k){
                printf(" ");
                k--;
            }
            int j=1,p=i;
            while(j<=i){
                printf("%d",j);
                if(i!=j)
                    printf("+");
                j++;}
            i=p;
            printf("=");
            while(p>=1){
                printf("%d",p);
                if(p!=1)
                    printf("+");
                p--;}
            if(i!=n)
                printf("\n");

        i++;
    }
    return 0;
}