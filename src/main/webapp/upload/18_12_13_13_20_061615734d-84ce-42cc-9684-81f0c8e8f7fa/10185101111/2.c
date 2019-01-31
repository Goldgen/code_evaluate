void strmcpy(char *pstr,int m,int len){
    char t[85];
    for(int a=0;a<len-m;a++){
        t[a]=*(pstr+m+a);
        printf("%c",t[a]);
    }
}
int main()
{
    char s[85]={0};
    int m;
    gets(s);
    scanf("%d",&m);
    char *pstr=s;
    int len=strlen(s);
    strmcpy(pstr,m,len);
}
