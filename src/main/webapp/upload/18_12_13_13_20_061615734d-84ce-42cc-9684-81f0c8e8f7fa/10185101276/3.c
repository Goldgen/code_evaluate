#include <stdio.h>
/*int get(char *pa)
{
    char *p=pa;
    while(1==scanf("%c",&*pa)&&*pa!='\n')pa++;
    return pa-p;
}*/
char *i2a(char *pa,int m)
{
    long long int n=10,i=0;
    while(m/n>0){
        n*=10;
        i++;
    }
    pa+=i;
    if(m==0){
        *pa='0';
    }
    *(pa+1)='\0';
    while(m>0){
    *pa=m%10+48;
    m/=10;
    pa-=1;
    }
    return pa;
}
int main()
{
    char a[1000]={0};
    int m=0;
    scanf("%d",&m);
    i2a(a,m);
    printf("%s\n",a);
    return 0;
}

