#include<stdio.h>

int main(int argc, char const *argv[])
{
    float score, highest, lowest;
    int n;

    highest = -1; lowest = 1000000000;
    n = 0;
    while(1) {
        scanf("%f", &score);
        if (score < 0.0) break;
        if (highest < score) highest = score;
        if (lowest > score) lowest = score;
        ;
    }
printf("最高成绩是: %.2f, 最低成绩是: %.2f",highest,lowest);


    return 0;
}
