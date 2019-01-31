#include<stdio.h>

double money(char a, int b, int c, int d, int e);

int main() {
    int amount, wide, high, leng;
    char kind;
    double total = 0;
    while (scanf("%c", &kind) != EOF) {
        if (kind == 'T') {
            printf("Total cost: $%.2f", total);
            break;
        }
        scanf("%d %d %d %d", &amount, &wide, &high, &leng);
        double price = money(kind, amount, wide, leng, high);
        total = price + total;
        switch (kind) {
            case 'P':
                printf("%d %d*%d*%d Pine, Cost: $%.2f\n", amount, wide, high, leng,
                       money(kind, amount, wide, leng, high));
                break;
            case 'F':
                printf("%d %d*%d*%d Fire, Cost: $%.2f\n", amount, wide, high, leng,
                       money(kind, amount, wide, leng, high));
                break;
            case 'C':
                printf("%d %d*%d*%d Cedar, Cost: $%.2f\n", amount, wide, high, leng,
                       money(kind, amount, wide, leng, high));
                break;
            case 'M':
                printf("%d %d*%d*%d Maple, Cost: $%.2f\n", amount, wide, high, leng,
                       money(kind, amount, wide, leng, high));
                break;
            case 'O':
                printf("%d %d*%d*%d Oak, Cost: $%.2f\n", amount, wide, high, leng, money(kind, amount, wide, leng, high));
                break;
        }
        scanf("%c", &kind);
    }

    return 0;
}

double money(char a, int b, int c, int d, int e) {
    double price = 0, count = 0, amount = 0, area = 0;
    switch (a) {
        case 'P':
            price = 0.89;
            break;
        case 'F':
            price = 1.09;
            break;
        case 'C':
            price = 2.26;
            break;
        case 'M':
            price = 4.50;
            break;
        default:
            price = 3.10;
            break;
    }
    area = (double) c / 12.0 * (double) e * (double) d;
    amount = (double) b * area;
    count = price * amount;
    return count;
}
