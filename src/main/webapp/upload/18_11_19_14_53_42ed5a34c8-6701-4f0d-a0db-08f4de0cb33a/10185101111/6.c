int fibonacc(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacc(n-1)+fibonacc(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacc(n));
}