void dao(int n){
    scanf("%d",&n);
    if(n<=0)
        return;
    dao(n);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
    dao(n);
    printf("%d",n);
    }
}