int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[n][35];
    char b[35];
    for(int i=0;i<n;i++)
        gets(a[i]);
    for(int t=0;t<n-1;t++)
    for(int m=t+1;m<n;m++){
        if(strcmp(a[t],a[m])<0){
            strcpy(b,a[m]);
            strcpy(a[m],a[t]);
            strcpy(a[t],b);
        }
    }
    for(int p=0;p<n;p++)
        printf("%s\n",a[p]);
}