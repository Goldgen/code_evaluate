#include <stdio.h>

int main()

{
    int b;
    scanf("%d",&b);
    int a[b];
    int i=0, c, d;
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }


for(c=1;c<=b-1;c++)

        for(i=0;i<=(b-1-1);i++)

        if(a[i]>a[i+1]){

        d=a[i];

        a[i]=a[i+1];

        a[i+1]=d;}



    for(i=0;i<b-1;i++)
    printf("%d ",a[i]);

    printf("%d",a[b-1]);



    return 0;

}