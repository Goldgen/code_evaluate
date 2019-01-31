
int main()
{
    double a=0.0;
    double b=0.0;
    char c=0;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c){
    case '+':
        printf("%.3lf",a+b);
        break;
    case '-':
        printf("%.3lf",a-b);
        break;
    case '*':
        printf("%.3lf",a*b);
        break;
    case '/':
        printf("%.3lf",a/b);
        break;
    default:
        break;
    }
    return 0;
}