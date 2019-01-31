#include <stdio.h>
#include <stdlib.h>
char ch(int i);
int main()
{
    int i,j,k,a,n;
    scanf("%d",&n);
    for(i=1;i<n;++i)
    {
        printf(" ");
    }
    printf("A\n");
    for(j=2;j<=n;++j)
    {
        for(k=1;k<=n-j;++k)
        {
            printf(" ");
        }
        for(a=1;a<=2*j-1;++a)
        {
            printf("%c",ch(j));
        }
        printf("\n");
    }
    for(i=1;i<n-1;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf(" ");
        }
        for(k=1;k<=(n-i)*2-1;++k)
        {
            printf("%c",ch(i+n));
        }
        printf("\n");
    }
    for(i=1;i<n;++i)
    {
        printf(" ");
    }
    printf("%c",ch(2*n-1));
    return 0;
}
char ch(int i)
{
    char c;
    switch(i)
    {
    case 2:
        c='B';
        break;
    case 3:
        c='C';
        break;
    case 4:
        c='D';
        break;
    case 5:
        c='E';
        break;
    case 6:
        c='F';
        break;
    case 7:
        c='G';
        break;
    case 8:
        c='H';
        break;
    case 9:
        c='I';
        break;
    case 10:
        c='J';
        break;
    case 11:
        c='K';
        break;
    case 12:
        c='L';
        break;
    case 13:
        c='M';
        break;
    case 14:
        c='N';
        break;
    case 15:
        c='O';
        break;
    case 16:
        c='P';
        break;
    case 17:
        c='Q';
        break;
    case 18:
        c='R';
        break;
    case 19:
        c='S';
        break;
    case 20:
        c='T';
        break;
    case 21:
        c='U';
        break;
    case 22:
        c='V';
        break;
    case 23:
        c='W';
        break;
    case 24:
        c='X';
        break;
    case 25:
        c='Y';
        break;
    default:
        c='Z';
        break;
    }
    return c;
}
