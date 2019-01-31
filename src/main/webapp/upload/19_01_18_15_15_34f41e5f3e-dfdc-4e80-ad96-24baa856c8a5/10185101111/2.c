int jie(int a){
    int ji=1;
    for(int i=1;i<=a;i++)
        ji*=i;
    return ji;
}
int main()
{
    float sum=0.0;
    for(int n=0;jie(n)<=1E6;n++){
        sum+=1.0/jie(n);
    }
    printf("%.6f",sum);
}