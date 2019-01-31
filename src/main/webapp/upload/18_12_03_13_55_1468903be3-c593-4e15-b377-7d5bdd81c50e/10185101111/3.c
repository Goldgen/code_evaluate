int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int main()
{
   char a[80],b[80];
   scanf("%s",a);
   scanf("%s",b);
   int m=strlen(a);
   int n=strlen(b);
   for(int i=0;i<m&&i<n;i++){
        printf("%c",a[i]);
        printf("%c",b[i]);
   }
   for(int t=min(m,n);t<max(m,n);t++){
    if(min(m,n)==m)
        printf("%c",b[t]);
    else
        printf("%c",a[t]);
   }
}