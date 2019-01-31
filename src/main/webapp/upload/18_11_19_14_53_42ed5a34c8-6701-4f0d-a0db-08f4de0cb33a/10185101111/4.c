void zhuan(int n){
    int m=n|0;
    if(m==0)
        return;
    int a=n>>1;
    zhuan(a);
    printf("%d",n&1);
}
int main()
{
    int n;
    scanf("%d",&n);
    zhuan(n);
}