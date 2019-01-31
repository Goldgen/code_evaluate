#include <stdio.h>
#include <stdlib.h>
#define BOARD_INCH 12.0

double price(char k, int p, int w, int h, int l);

int main()
{
   char kind;
   int piece, width, height, length;
   double ans = 0;

   scanf("%c", &kind);
   while (kind != 'T'){
        scanf("%d%d%d%d", &piece, &width, &height, &length);
        ans += price(kind, piece, width, height, length);
        printf("%d %d*%d*%d ", piece, width, height, length);
        if (kind == 'P')
            printf("Pine");
        else if (kind == 'F')
            printf("Fire");
        else if (kind == 'C')
            printf("Cedar");
        else if (kind == 'M')
            printf("Maple");
        else
            printf("Oak");
        printf(", Cost: $%.2lf\n", price(kind, piece, width, height, length));
        scanf("%c%c", &kind, &kind);
   }
   printf("Total cost: $%.2lf", ans);
   return 0;
}

double price(char k, int p, int w, int h, int l)
{
    double a = 0;
    a = p * w * h * l / BOARD_INCH;
    if (k == 'P')
        return a * 0.89;
    else if (k == 'F')
        return a * 1.09;
    else if (k == 'C')
        return a * 2.26;
    else if (k == 'M')
        return a * 4.50;
    return a * 3.10;
}
