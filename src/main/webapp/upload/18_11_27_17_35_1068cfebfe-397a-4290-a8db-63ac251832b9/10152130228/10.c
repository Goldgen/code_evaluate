#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[111], n, tmp;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<n-1; i++)    //??m-1?
    {
        for (int j = 0; j < n-i-1; j++)   // ??????a[m-i-1]?a[m-i-2]
        {
            if (a[j]>a[j+1])    //??a[j]?a[j+1]??????
            {
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i=0; i<n-1; i++)
        printf("%d ", a[i]);
    printf("%d", a[n-1]);
    return 0;
}
