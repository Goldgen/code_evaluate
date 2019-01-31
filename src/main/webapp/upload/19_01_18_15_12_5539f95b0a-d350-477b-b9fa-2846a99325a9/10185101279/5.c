#include<stdio.h>
int main()
{
    int a[8];
    int n=0;
	int a1,b,c,d,e,f,g,h;
    scanf("%d %d %d %d %d %d %d %d",&a1,&b,&c,&d,&e,&f,&g,&h);
	printf("%d\n",a1+b+c+d+e+f+g+h);
    for(int i=1;i<=8;i++)
    {
        scanf("%d",&a[i-1]);
        getchar();
        n+=a[i-1];
    }
    printf("%d",n);


    return 0;
}




