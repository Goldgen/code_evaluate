int main()
{
    char a[12][10]={"January","February","March","April","May",
    "June","July","August","September","October","November","December"};
    int n;
    scanf("%d",&n);
    printf("%s",*(a+n-1));
}