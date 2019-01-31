#include <stdio.h>

int main()
{
    int i;
    int a, b, c;
    int cnt = 0;
    for(i = 100; i <= 999; i++)
    {
        a = i / 100;
        c = i % 10;
        b = i / 10 - 10 * a;
        int s = a * a * a + b * b * b + c * c * c;
        if(s == i)
        {
            printf("%d", i);
            cnt++;
            if(cnt < 4)
            {
                printf(" ");
            }
        }
        //答案已知，解决格式问题

    }
    return 0;
}
