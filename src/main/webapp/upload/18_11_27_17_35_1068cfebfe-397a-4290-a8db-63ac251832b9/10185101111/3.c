const double eps=1E-5;
int main()
{
    float amounts[5];
    long dollars[5],cents[5];
    for(int i=0;i<5;i++){
        scanf("%f",&amounts[i]);
        dollars[i]=(long)(amounts[i]+eps);
        cents[i]=(amounts[i]-(long)(amounts[i]+eps))*100+eps;
    }
    if(cents[0]>9)
            printf("$%ld.%ld",dollars[0],cents[0]);
        else
            printf("$%ld.0%ld",dollars[0],cents[0]);
    for(int m=1;m<5;m++){
        if(cents[m]>9)
            printf(" $%ld.%ld",dollars[m],cents[m]);
        else
            printf(" $%ld.0%ld",dollars[m],cents[m]);
    }
}
