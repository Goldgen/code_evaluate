#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,sign1=0,sign=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    scanf("%d",&num);

    for(int i=0;i<n;++i){
        if(a[i]==num)
        sign1++;
    }
        if(sign1==0){
            printf("ERROR");
            return 0;
        }
    for(int i=0;i<n;++i){
    {
    if(a[i]==num&&sign==0)
            {sign++;
            continue;}
    else if(a[i]==num&&sign!=0)
            printf("%d",a[i]);
    else if(a[i]!=num)
            printf("%d",a[i]);
    }

            if(i!=n-1&&a[n-1]!=num)
                printf(" ");
            else if(a[n-1]==num&&i!=n-2)
                printf(" ");
    }
    return 0;
}


