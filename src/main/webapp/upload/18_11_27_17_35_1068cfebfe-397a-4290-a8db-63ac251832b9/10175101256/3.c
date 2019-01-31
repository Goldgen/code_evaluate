#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{   int data[10];
    printf("%d %d\n",&data[0],sizeof(data)/sizeof(int));
    return 0;
}
*/
/*
long long c(int a,int b){
    long long sum=1;
    for(int i=a;i>a-b;i--){
        sum*=i;
    }
    for(int i=1;i<=b;i++){
        sum/=i;
    }
    return sum;
}
int main(){
    int m,n,k;
    while(scanf("%d %d %d",&m,&n,&k)!=EOF){
    int min=m>n?n:m;
    int max=m>n?m:n;
    int t=1;
    long long sum=1;
    for(int i=1;i<=k;i++){
        sum*=i;
    }
    sum*=c(min,k);
    sum*=c(max,min);
    printf("%lld\n",sum);
    }
}
*/

const double pi=3.1415926;
int main()
{
    double amounts[5];
    long dollars[5],cents[5];
    for(int i=0;i<5;i++){
        scanf("%lf",&amounts[i]);
        amounts[i]+=0.00001;
        amounts[i]-=0.005;
        dollars[i]=(long)amounts[i];
        cents[i]=(100*(amounts[i]-dollars[i]));
    }
    for(int i=0;i<5;i++){
        if(i)
            printf(" ");
        //printf("$%d.%d",dollars[i],cents[i]);
        printf("$%.2f",amounts[i]);
    }
}

