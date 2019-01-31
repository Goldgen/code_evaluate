void LongestWord(const char str[], char result[])
{
    int n=strlen(str);
    int cont1=0,cont2=0;
    for(int i=0;i<n;i++){
        if(isalpha(str[i]))
            cont2++;
        if(str[i]==' '||(i==n-1)){
            if(cont2>cont1){
                for(int t=0;t<=cont2;t++)
                result[t]=str[i-cont2+t];
                cont1=cont2;
            }
            cont2=0;
        }
    }
    for(int m=0;m<100;m++){
        if(isalpha(result[m]))
            printf("%c",result[m]);
    }
    printf("\n");
}
int main()
{
    char a[100],b[100]={0};
    gets(a);
    LongestWord(a,b);
}