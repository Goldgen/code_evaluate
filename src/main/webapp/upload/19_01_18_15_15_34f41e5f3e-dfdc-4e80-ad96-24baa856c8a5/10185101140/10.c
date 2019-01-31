#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);//n=3 //{0 1 2}
    int i;int j;
    int b=1;int c;
    for(c=1;c<=n;c++){
        b*=2;//8
    }
    int t=1;int s;int h=1;
    for(i=0;i<b;i++){
        printf("{");
        for(j=0,t=1;j<n;j++){//0 1 2
            s=i&(1<<j);
            if(s!=0){
                if(t>1)printf(",");
                printf("%d",j);
                t++;
            }
        }
        printf("}");
        if(h<b){
            printf("\n");
            h++;
        }
    }
    return 0;
}
