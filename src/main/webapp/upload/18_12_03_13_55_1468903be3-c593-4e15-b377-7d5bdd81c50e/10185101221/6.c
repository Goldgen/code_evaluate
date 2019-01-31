#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    char arr[9];
    gets(arr);
    int n=strlen(arr);
    int num[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        arr[i]=toupper(arr[i]);
        if(isupper(arr[i]))
            num[i]=arr[i]-'A'+10;
        else
            num[i]=arr[i]-'0';
        sum+=num[i]*pow(16,n-i-1);
    }
    printf("%lld",sum);
    return 0;
}
