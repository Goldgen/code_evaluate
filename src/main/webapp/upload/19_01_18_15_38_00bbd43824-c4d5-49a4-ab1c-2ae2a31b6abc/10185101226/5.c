#include<stdio.h>
int main()
{
    int a,sum=0;
    char ch;
    while(scanf("%d",&a)){
        sum+=a;
        if((ch=getchar())==EOF){
            printf("%d",sum);
            break;
        }
    }
    return 0;
}
