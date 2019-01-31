int main()
{
    double data[100];
    double sum=0.0;
    for(int i=0;i<100;i++)
        data[i]=1.0/((i*2+2)*(i*2+3)*(i*2+4));
    for(int m=0;m<100;m++)
        sum+=pow(-1,m)*data[m];
    printf("%.4f",sum*4.0+3.0);
}