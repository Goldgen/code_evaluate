#include <stdio.h>
int rev(void);

int main(void)
{
    rev();
}

int rev()
{
    static i = 0;
    static int a[99999]={0};
    scanf("%d",&a[i]);
    if(a[i]<=0)
        {
            for(i=i-1;i>=0;i--)
                {
                    printf("%d",a[i]);
                    if(i!=0)
                        printf(" ");
                }
                return 0;
        }
        i++;
        rev();
}
