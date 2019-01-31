#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int i=0;int j;int m;//i!/(i-j)！j!
    int a=1,b=1,c=1;int s,t,u;
    int d=1,e=0;//换行数 空格数
    while(i<n){
        for(j=0;j<=i;j++){
            for(s=1,a=1;s<=i;s++){
                a*=s;
            }
            for(t=1,b=1;t<=j;t++){
                b*=t;
            }
            for(u=1,c=1;u<=(i-j);u++){
                c*=u;
            }
            m=a/(c*b);
            printf("%d",m);
            if (e<i){
                printf(" ");
                e++;
            }
        }
        e=0;
        if(d<n){
            printf("\n");
            d++;
        }
        i++;
    }
    return 0;
}
