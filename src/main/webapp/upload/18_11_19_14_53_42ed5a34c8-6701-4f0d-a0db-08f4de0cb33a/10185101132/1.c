float RunningAvg(float);

int main()
{
    float n = 0;
    scanf("%f", &n);
    while(n != -1){
        printf("%.2f\n", RunningAvg(n));
        scanf("%f", &n);
    }
    return 0;
}

float RunningAvg(float m){
    static float sum = 0;
    static float cnt = 1;
    float avg = 0;

    sum += m;
    avg = 1.0 * sum / cnt;
    cnt++;

    return avg;
}
