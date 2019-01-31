#include <stdio.h>
#include <math.h>

float RunningAvg(int, float);

int main()
{
    int n = 0;
    float a, ans = 0, tot = 0;
    scanf("%f", &a);
    while (a != -1){
        tot += a;
        ++n;
        ans = RunningAvg(n, tot);
        printf("%.2f\n", ans);
        scanf("%f", &a);
    }

    return 0;
}
float RunningAvg(int y, float z)
{
    return z / y;
}
