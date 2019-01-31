
int number;
void zhuan(char *pa,int m){
    *pa=m%10+'0';
    m/=10;
    if(m==0){
        printf("%c",*pa);
        return;
    }
    zhuan(pa+1,m);
    printf("%c",*pa);
}
int main()
{
    int m;
    scanf("%d",&m);
    char s[12];
    char *pa=s;
    zhuan(pa,m);
}