#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    int data1[n-1];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    int a;
    scanf("%d",&a);
    int j;
    for(j=0;j<n;)
    {
        if(a==data[j])
            {
                for(int c=0;c<n-1;c++)
                  {
                      if(c<j)
                    data1[c]=data[c];
                   else
                    data1[c]=data[c+1];
                printf("%d",data1[c]);
                if(c!=n-2)
                    printf(" ");

                }
                break;
            }
       else j++;
    }

if(j==n)
    printf("ERROR");
    return 0;
}
