#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int hex2int(char s[])
{
    int n=0;
    n=strlen(s);
    int sum[n];
    int sum1=0;
    for(int i=n-1;i>=0;--i)
    {
        if(s[i]=='A'||s[i]=='a')
            sum[i]=10*(int)pow(16,n-i-1);
        else if(s[i]=='B'||s[i]=='b')
            sum[i]=11*(int)pow(16,n-i-1);
        else if(s[i]=='C'||s[i]=='c')
            sum[i]=12*(int)pow(16,n-i-1);
        else if(s[i]=='D'||s[i]=='d')
            sum[i]=13*(int)pow(16,n-i-1);
        else if(s[i]=='E'||s[i]=='e')
            sum[i]=14*(int)pow(16,n-i-1);
        else if(s[i]=='F'||s[i]=='f')
            sum[i]=15*(int)pow(16,n-i-1);
        else if(s[i]=='0')
            sum[i]=0*(int)pow(16,n-i-1);
        else if(s[i]=='1')
            sum[i]=1*(int)pow(16,n-i-1);
        else if(s[i]=='2')
            sum[i]=2*(int)pow(16,n-i-1);
        else if(s[i]=='3')
            sum[i]=3*(int)pow(16,n-i-1);
        else if(s[i]=='4')
            sum[i]=4*(int)pow(16,n-i-1);
        else if(s[i]=='5')
            sum[i]=5*(int)pow(16,n-i-1);
        else if(s[i]=='6')
            sum[i]=6*(int)pow(16,n-i-1);
        else if(s[i]=='7')
            sum[i]=7*(int)pow(16,n-i-1);
        else if(s[i]=='8')
            sum[i]=8*(int)pow(16,n-i-1);
        else if(s[i]=='9')
            sum[i]=9*(int)pow(16,n-i-1);
    }
    for(int i=0;i<n;++i)
        sum1+=sum[i];
    return sum1;
}

int main()
{
    char s[8];
    scanf("%s",s);
    printf("%d",hex2int(s));
    return 0;
}