#include<stdio.h>
int main()
{
    int n;
    char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M',
				 'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&n);
    for(int i=0;i<2*n-1;++i)
    {
        if(i<n)
        {
            for(int j=0;j<n-i-1;++j)
                printf(" ");
            for(int k=0;k<2*(i+1)-1;++k)
                printf("%c",ch[i]);
            printf("\n");
        }
        else
        {
            for(int x=0;x<i+1-n;++x)
                printf(" ");
            for(int y=0;y<(n-(i+1-n))*2-1;++y)
                printf("%c",ch[i]);
            if(i<2*n-2)
                printf("\n");
        }
    }
    return 0;
}
