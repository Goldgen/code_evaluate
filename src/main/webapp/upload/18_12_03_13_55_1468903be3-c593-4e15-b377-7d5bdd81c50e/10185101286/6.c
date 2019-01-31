#include<stdio.h>
#include<math.h>
long long int hex2int(int a,char t[]);
int main()
{
    char shu[10]={0};
    int n=0;
    int i;
    for(i=0;i<1000;++i)
    {
        shu[i]=getchar();
        if(shu[i]!='\n')
        {
            ++n;
        }
        else
        {
            shu[i]='\0';
            break;
        }
    }
    printf("%lld",hex2int(n,shu));
    return 0;
}
long long int hex2int(int a,char t[])
{
    int i,m;
    long long int count=0;
    for(i=a-1;i>=0;--i)
    {
        switch(t[a-1-i])
        {
        case '0':
            m=0;
            break;
        case '1':
            m=1;
            break;
        case '2':
            m=2;
            break;
        case '3':
            m=3;
            break;
        case '4':
            m=4;
            break;
        case '5':
            m=5;
            break;
        case '6':
            m=6;
            break;
        case '7':
            m=7;
            break;
        case '8':
            m=9;
            break;
        case 'A':case 'a':
            m=10;
            break;
        case 'B':case 'b':
            m=11;
            break;
        case 'C':case 'c':
            m=12;
            break;
        case 'D':case 'd':
            m=13;
            break;
        case 'E':case 'e':
            m=14;
            break;
        default:
            m=15;
            break;
        }
        count+=pow(16,i)*m;
    }
    return count;
}
