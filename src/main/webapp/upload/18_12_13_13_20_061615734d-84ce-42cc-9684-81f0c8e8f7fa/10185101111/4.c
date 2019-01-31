void zhuan(char *pa,int len){
    if(*(pa+len)=='Z')
    *(pa+len)='A';
    else
    *(pa+len)=(*(pa+len))+1;
    len--;
    if(len==0){
        if(*(pa+len)=='Z')
        printf("A");
        else
        printf("%c",*(pa+len)+1);
        return;
    }
    zhuan(pa,len);
    printf("%c",*(pa+len));
}
int main()
{
    int m;
    scanf("%d",&m);
    getchar();
    for(int i=1;i<=m;i++){
    char s[55];
    gets(s);
    int len=strlen(s);
    char *pa=s;
    printf("case #%d: ",i-1);
    zhuan(pa,len);
    printf("\n");
    }
    return 0;
}