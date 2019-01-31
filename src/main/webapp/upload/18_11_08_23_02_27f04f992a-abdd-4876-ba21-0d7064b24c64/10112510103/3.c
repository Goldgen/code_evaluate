#include <stdio.h>

int main() {
    int h, m, now, ans = -1;
    const int time1 =  6 * 60 + 50,
               time2 =  8 * 60 + 30,
               time3 = 11 * 60 + 50,
               time4 = 13 * 60 + 50,
               time5 = 16 * 60 + 50,
               time6 = 18 * 60 +  0,
               time7 = 20 * 60 + 50;

    scanf("%d:%d",&h, &m);
    now = h * 60 + m;
    if(now <= time1) {
        ans = time1 - now;
    } else if(now <= time2) {
        ans = time2 - now;
    } else if(now <= time3) {
        ans = time3 - now;
    } else if(now <= time4) {
        ans = time4 - now;
    } else if(now <= time5) {
        ans = time5 - now;
    } else if(now <= time6) {
        ans = time6 - now;
    } else if(now <= time7) {
        ans = time7 - now;
    }
    printf("%d",ans);
    return 0;
}
