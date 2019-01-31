void dao(char *pa){
    char m;
    scanf("%c",&m);
    if(m=='?')
        return;
    dao(pa+1);
    printf("%c",m);
}
int main()
{
    char a[1000];
    char *pa=a;
    dao(pa);
}