#include <stdio.h>
int main()
{
    int m,n;
    int a,b,c;
    a = 1;
    b = 0;
    c = 1;
    scanf("%d",&n);
    m =(n+1)/2;
    while(a<m)
    {
        while(c<=m+b)
        {
            if(c==(m-b)||c==(m+b))
            {
            printf("*");
            }
            else
                printf(" ");
            if(c==(m+b))
                printf("\n");
                c++;
        }
       b++;
       a++;
       c = 1;
}
while(c<=n){
        printf("*");
        c++;

}
    return 0;

}
