#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <math.h>
long long int hex2int(char str[],int n)
{
    int i;
   long long int str2[n];
    for(i=n-1;i>=0;i--)
    {
        switch(str[i])
        {
            case 'a':case'A': str2[i]=10*pow(16,n-i-1);break;
            case 'b':case'B': str2[i]=11*pow(16,n-i-1);break;
            case 'c':case'C': str2[i]=12*pow(16,n-i-1);break;
            case 'd':case'D': str2[i]=13*pow(16,n-i-1);break;
            case 'e':case'E': str2[i]=14*pow(16,n-i-1);break;
            case 'f':case'F': str2[i]=15*pow(16,n-i-1);break;
            case'0':str2[i]=0;break;
            case'1':str2[i]=1*pow(16,n-i-1);break;
            case'2':str2[i]=2*pow(16,n-i-1);break;
            case'3':str2[i]=3*pow(16,n-i-1);break;
            case'4':str2[i]=4*pow(16,n-i-1);break;
            case'5':str2[i]=5*pow(16,n-i-1);break;
            case'6':str2[i]=6*pow(16,n-i-1);break;
            case'7':str2[i]=7*pow(16,n-i-1);break;
            case'8':str2[i]=8*pow(16,n-i-1);break;
            case'9':str2[i]=9*pow(16,n-i-1);break;
            default:break;
        }
    }
    long long int sum = 0;
    for(i=0;i<n;i++)                                 //??????????
        sum = sum + str2[i];
    return sum;

}
int main()
{
    char str[9];
    gets(str);
    long long int f = hex2int(str,strlen(str));
    printf("%lld",f);
    return 0;
}
