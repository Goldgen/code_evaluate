#include<stdio.h>
int main()
{
    unsigned int n,m=1,i,j,k,s;
    scanf("%u",&n);
    for (i=1;i<=n;i++)
        m *=2;
    m--;
    printf("{}");
    for (i=1;i<=m;i++)
    {
        printf("\n{");
        j=i;
        k=0;
        s=0;
        while (j!=0){
                if((j%2==1)&&(s!=0))
                        printf(",%u",k);

                if((j%2==1)&&(s==0))
                {
                    printf("%u",k);
                    s++;
                }

            k++;
            j/=2;
        }
        printf("}");
    }
    return 0;
}