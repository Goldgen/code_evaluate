#include <stdio.h>
char *strcpy(char *pb,char *pa,int m)
{
    pa+=m;
    while(*pa!='\0'){
        *pb=*pa;
        pa++;
        pb++;
    }
    *pb='\0';
    return pa;
}
int get(char *pa)
{
    char *p=pa;
    while(1==scanf("%c",&*pa)&&*pa!='\n')pa++;
    return pa-p;
}
int main()
{
    char a[1000]={0};
    char b[1000]={0};
    int m=0;
    get(a);
    scanf("%d",&m);
    strcpy(b,a,m);
    printf("%s",b);
    return 0;
}
