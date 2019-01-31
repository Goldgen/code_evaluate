#include <stdio.h>

float pri(int n, int l, int r, int h, char c)
{
    double x, y;
    static double t;
    switch(c)
    {
        case 'P':
            x = 0.89;
            y = (l*r*h/12.0)*n*x;
            printf("%d %d*%d*%d Pine, Cost: $%.2f", n, l, r, h, y);
            break;
        case 'F':
            x = 1.09;
            y = (l*r*h/12.0)*n*x;
            printf("%d %d*%d*%d Fire, Cost: $%.2f", n, l, r, h, y);
            break;
        case 'C':
            x = 2.26;
            y = (l*r*h/12.0)*n*x;
            printf("%d %d*%d*%d Cedar, Cost: $%.2f", n, l, r, h, y);
            break;
        case 'M':
            x = 4.50;
            y = (l*r*h/12.0)*n*x;
            printf("%d %d*%d*%d Maple, Cost: $%.2f", n, l, r, h, y);
            break;
        case 'O':
            x = 3.10;
            y = (l*r*h/12.0)*n*x;
            printf("%d %d*%d*%d Oak, Cost: $%.2f", n, l, r, h, y);
            break;
        default:
            break;
    }
    t = t+y;
    return t;
}

int main()
{
    char c, c1;
    int n, l, r, h;

    do
    {
        c1 = getchar();
        scanf("%c %d %d %d %d", &c, &n, &l, &r, &h);
        if(c1=='T')
            break;
        pri(n, l, r, h, c);
    }
    while(c!='T');
    printf("Total cost: $%.2f", pri(n, l, r, h, c));
}
