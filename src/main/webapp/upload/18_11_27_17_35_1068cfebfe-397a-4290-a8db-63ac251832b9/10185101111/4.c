int main()
{
    double data[11][5];
    double n=2.0;
    for(int i=0;i<11;i++,n+=0.1){
        data[i][0]=n;
        data[i][1]=1/n;
        data[i][2]=pow(n,2);
        data[i][3]=pow(n,3);
        data[i][4]=pow(n,4);
    }
    for(int m=0;m<10;m++){
        for(int t=0;t<4;t++)
            printf("%.4f ",data[m][t]);
        printf("%.4f",data[m][4]);
        printf("\n");
    }
    for(int t=0;t<4;t++)
            printf("%.4f ",data[10][t]);
        printf("%.4f",data[10][4]);
}
