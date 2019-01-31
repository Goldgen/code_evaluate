#include <stdio.h>
int main(void)
{
    char num1[10000],num2[10000],sum[10000];
    int i1=0,i2=0,i=0,q=0,carrybit=0;
    const int trans=1-'1';
    for(i1=0;i1<10000;i1++){      //0 to i1-1 high to low
        scanf("%c",&num1[i1]);
        if(num1[i1]=='\n') break;
    }
    for(i2=0;i2<10000;i2++){
        scanf("%c",&num2[i2]);
        if(num2[i2]=='\n')  break;
    }
    if(i1>=i2){
        for(i=0;i<=i2;i++){
            num2[i1-i]=num2[i2-i];
        }
        for(i=0;i<i1-i2;i++){
            num2[i]='0';
        }
    }
    else{
        for(i=0;i<=i1;i++){
            num1[i2-i]=num1[i1-i];
        }
        for(i=0;i<i1-i2;i++){
            num1[i]='0';
        }
    }
    i=(i1>i2?i1-1:i2-1);
    for(q=i;q>=0;q--){
        sum[q]=(num1[q]+num2[q]+2*trans+carrybit)%10-trans;
        carrybit=(num1[q]+num2[q]+2*trans+carrybit)/10;
    }
    if(carrybit==1) printf("%d",carrybit);
    for(q=0;q<=i;q++){
        printf("%c",sum[q]);
    }
    return 0;
}





