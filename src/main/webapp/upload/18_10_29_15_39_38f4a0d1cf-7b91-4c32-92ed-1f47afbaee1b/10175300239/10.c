#include <stdio.h>

int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    for(i=0;i<(1<<n);++i){
        count=0;
        printf("{");
        for(j=0;j<n;++j){
            if(i&1<<j){
                if(count==0){
                    printf("%d",j);
                    count=1;
                }
                else
                    printf(",%d",j);
            }
        }
        if(i==(1<<n)-1)
            printf("}");
        else
            printf("}\n");
    }
    return 0;
}