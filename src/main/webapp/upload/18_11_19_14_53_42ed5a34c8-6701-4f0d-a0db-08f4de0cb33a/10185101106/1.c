#include<stdio.h>
void average(void)
{
    float m = 0, n, i = 1;
    float ave;
    do {
        scanf("%f", &n);
        m = m + n;
        ave = m / i;
        i++;
        if(n != -1)
        printf("%.2f\n",ave);
    }while(n != -1);

}
int main()
{
    average();
    return 0;
}