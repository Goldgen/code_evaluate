int main()
{
    double a[6];
    double b[6];
    double sum=0.0;
    for(int i=1;i<=5;i++){
        scanf("%lf",&a[i]);
        b[i]=1.0/a[i];
    }
    for(int m=1;m<=5;m++){
        if(m==5){
        printf("%.2f\n",b[m]);
        sum+=b[m];
        break;
        }
        printf("%.2f ",b[m]);
        sum+=b[m];
    }
    printf("%.6f",sum);
}