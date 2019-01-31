#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char x[26];
    x[0]='A',x[1]='B',x[2]='C',x[3]='D',x[4]='E',x[5]='F',x[6]='G',x[7]='H',x[8]='I';
    x[9]='J',x[10]='K',x[11]='L',x[12]='M',x[13]='N',x[14]='O',x[15]='P',x[16]='Q',x[17]='R';
    x[18]='S',x[19]='T',x[20]='U',x[21]='V',x[22]='W',x[23]='X',x[24]='Y',x[25]='Z';
    scanf("%d",&n);
    for(int i=1;i<=2*n;++i)
    {
    if(i<=n)
    {
    for(int k=1;k<=n-i;++k)
            printf(" ");
    for(int j=1;j<=2*i-1;++j)
            printf("%c",x[i-1]);
    if(i!=0)
    printf("\n");
    }
    else if(i>n)
    {
    for(int k=1;k<=i-n;++k)
            printf(" ");
    {for(int j=1;j<=4*n-2*i-1;++j)
        printf("%c",x[i-1]);
     if(i<2*n-1)
     printf("\n");
     else
        return 0;
     }
    }
    }
    return 0;
}
