
#include <stdio.h>
#include <string.h>


int main()
{
    char s[8];
    int n,i,j=0,m,k;
    int num[8];
    long long sum1=1,sum2=0;
    scanf("%s",s);
    n=strlen(s);
    for(m=0;m<n;m++)
    {
        switch(s[m])
        {
        case '0':
            num[m]=0;
            break;
            case '1':
            num[m]=1;
            break;
            case '2':
            num[m]=2;
            break;
            case '3':
            num[m]=3;
            break;
            case '4':
            num[m]=4;
            break;
            case '5':
            num[m]=5;
            break;
            case '6':
            num[m]=6;
            break;
            case '7':
            num[m]=7;
            break;
            case '8':
            num[m]=8;
            break;
            case '9':
            num[m]=9;
            break;
            case 'a': case 'A':
            num[m]=10;
            break;
            case 'b': case 'B':
            num[m]=11;
            break;
            case 'c': case 'C':
            num[m]=12;
            break;
            case 'd': case 'D':
            num[m]=13;
            break;
            case 'e': case 'E':
            num[m]=14;
            break;
            case 'f': case 'F':
            num[m]=15;
            break;

        }
    }
    for(i=n-1;i>=0;i--)
    {
		sum1=1;
        for(k=0;k<j;k++)
        {
            sum1*=16;
        }
        sum2+=num[i]*sum1;
        j++;
    }
    printf("%lld",sum2);
    return 0;
}
