#include <stdio.h>
int main()
{
    int t[3],i,a,b;
    for(i=0;i<=2;i++){
        scanf("%d",&t[i]);
    }
    for(a=0;a<2;a++){
        for(i=a+1;i<=2;i++){
            if(t[a]>t[i]){
                b=t[a];
                t[a]=t[i];
                t[i]=b;
            }
        }
    }printf("%d",t[1]);


}