#include<stdio.h>
int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    if(n==1)
        printf("1==1");
    else
    {
        printf("1==1");
        i++;
        while(i<=n)
        {
            printf("/n");
            for(int j=1;j<=2*(n-i);j++)
                printf(" ");
            if(i==2)
                printf("1+2=2+1");
            if(i==3)
                printf("1+2+3=3+2+1");
            if(i==4)
                printf("1+2+3+4=4+3+2+1");
            if(i==5)
                printf("1+2+3+4+5=5+4+3+2+1");
            if(i==6)
                printf("1+2+3+4+5+6=6+5+4+3+2+1");
            if(i==7)
                printf("1+2+3+4+5+6+7=7+6+5+4+3+2+1");
            if(i==8)
                printf("1+2+3+4+5+6+7+8=8+7+6+5+4+3+2+1");
            if(i==9)
                printf("1+2+3+4+5+6+7+8+9=9+8+7+6+5+4+3+2+1");
            i++;
        }
    }
    return 0;
}
