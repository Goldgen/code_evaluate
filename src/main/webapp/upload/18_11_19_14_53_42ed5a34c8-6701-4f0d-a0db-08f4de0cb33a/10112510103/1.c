 #include <stdio.h>
 #include <math.h>

double RunningAvg(double x){
    static double sum = 0;
    static int cnt = 0;
    sum += x;
    cnt++;
    return sum / cnt;
}

int main() {
    double x;
    while(1){
        scanf("%lf",&x);
        if(fabs(x + 1) < 1e-6){
            break;
        }
        printf("%.2f\n",RunningAvg(x));
    }
    return 0;
}


