int main()
{
    char a[80];
    gets(a);
    int limit=0;
    int t=strlen(a);
    for(int i=0;i<=t/2;i++)
    if(a[i]!=a[t-1-i]){
        limit=1;
        break;
    }
    if(limit)
        printf("False");
    else
        printf("True");
}