#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j;
    char A[100],B[100];
    scanf("%s%s",A,B);
    if(strlen(A)!=strlen(B)) printf("\"%s\" is NOT a rotation of \"%s\"",A,B);
    else
    {
        int n=strlen(A);
        for(i=0;i<n;i++)
        {
            int flag=0;
            for (j=0;j<n-i;j++)
                if (A[j]!=B[j+i]) {flag=1;break;}
            for (j=0;j<i;j++)
                if (B[j]!=A[j+n-i]) {flag=1;break;}
            if (flag==0)
            {
                printf("\"%s\" is a rotation of \"%s\"",A,B);
                return 0;
            }
        }
        printf("\"%s\" is NOT a rotation of \"%s\"",A,B);
    }
    return 0;
    
}
