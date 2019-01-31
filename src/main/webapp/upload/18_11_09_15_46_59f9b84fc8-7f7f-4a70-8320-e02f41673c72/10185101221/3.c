#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int l = 2*n - 1;;
    char arr[l];
    arr[0] = 'A';
    for(int i=1;i<l;i++)
    {
        arr[i] = arr[i-1] + 1;
    }
    for(int i=0;i<l;i++)
    {
        if(i<n)
        {
            for(int j=1;j<=n+i;j++)
            {
                if(j<n-i)
                    printf(" ");
                else if(j==n+i)
                    printf("%c\n",arr[i]);
                else
                    printf("%c",arr[i]);
            }
        }//前n行
        else if(i==l-1)
        {
            for(int j=1;j<n;j++)
                printf(" ");
            printf("%c",arr[l-1]);
        }//最后一行
        else
        {
             for(int j=1;j<n+l-i;j++)
             {
                 if(j<=i-n+1)
                    printf(" ");
                 else if(j==n+l-i-1)
                    printf("%c\n",arr[i]);
                 else
                    printf("%c",arr[i]);
             }
        }//中间几行
    }

    return 0;
}
