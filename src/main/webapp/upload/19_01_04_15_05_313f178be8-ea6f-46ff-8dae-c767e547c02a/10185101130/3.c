#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char*A,char*B);
int main()
{
    char A[1005];
    char B[1005];
    while(scanf("%s",A) > 0)
    {
        if(strcmp(A,"#") == 0)
            break;
        scanf("%s",B);
        printf("%d\n",find(A,B));

    }
    return 0;
}

int find(char*A,char*B)
{
    int lena = strlen(A);
    int lenb = strlen(B);
    int i,count=0;
    for(i = 0;i < lena;i++)
    {
        int k=i,j=0;
        for(;j<lenb&&k<lena;j++,k++)
        {
            if(A[k] != B[j])
                break;
        }
        if(j == lenb)
        {
            count++;
            i += lenb-1;
        }
    }
    return count;
}
