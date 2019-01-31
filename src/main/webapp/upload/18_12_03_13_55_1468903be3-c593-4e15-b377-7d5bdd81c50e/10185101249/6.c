#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int h,i,m;
    long long s=0;
    char a[10];
    int b[10];
    scanf("%s",a);
    h=strlen(a);
    for(i=0;i<h;i++)
    {
        if(a[i]<65)
            b[i]=(int)(a[i]-48);
        else if(a[i]>='A'&&a[i]<='Z')
            b[i]=(int)(a[i]-'A'+10);
        else
            b[i]=(int)(a[i]-'a'+10);
    }
    for(i=0;i<h;i++)
    {
        m=h-i-1;
        s+=b[m]*pow(16,i);
    }

    printf("%ld",s);
    return 0;
}
