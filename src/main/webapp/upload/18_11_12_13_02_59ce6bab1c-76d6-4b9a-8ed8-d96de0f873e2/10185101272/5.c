#include <stdio.h>
double count(char l,double a){
    double sum=0;
    switch (l){
        case 'P':sum=a*0.89;printf("Pine");break;
        case 'F':sum=a*1.09;printf("Fire");break;
        case 'C':sum=a*2.26;printf("Cedar");break;
        case 'M':sum=a*4.5;printf("Maple");break;
        case 'O':sum=a*3.1;printf("Oak");break;
        default: break;
    }
    return sum;
}
int main()
{
    char l;
    long long a,b,c,d;
    double sum=0,x;
    while(~scanf("%c",&l)){
        if(l=='T') printf("Total cost: $%.2lf",sum);
        else{
            scanf(" %lld%lld%lld%lld ",&a,&b,&c,&d);
            printf("%lld %lld*%lld*%lld ",a,b,c,d);
            x=count(l,1.0*a*b*c*d/12);
            printf(", Cost: $%.2lf\n",x);
            sum+=x;
        }
    }

    return 0;
}
