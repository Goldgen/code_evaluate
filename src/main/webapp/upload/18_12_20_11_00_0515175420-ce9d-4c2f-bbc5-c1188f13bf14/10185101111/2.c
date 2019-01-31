void huan2(char b[][250],char a[],char *pa,int ge[],int stable[],int *pt){
    strcpy(b[0],pa);
        for(int o=0;o<*pt;o++)
            strcpy(b[o+1],pa+ge[o]+1);
        for(int p=0;p<*pt;p++){
            if(stable[p])
            continue;
        for(int q=p+1;q<=*pt;q++){
            if(stable[q])
            continue;
            if(strcmp(b[p],b[q])>0){
                char d[250];
                strcpy(d,b[p]);
                strcpy(b[p],b[q]);
                strcpy(b[q],d);
            }
        }
        }
}
void huan1(char b[][250],char a[],char *pa,int ge[],int stable[],int *pt){
    int str_len=strlen(a);
        for(int m=0;m<str_len;m++){
           if(a[m]==' '){
                a[m]='\0';
                ge[*pt]=m;
                *pt=*pt+1;
           }
           else if(!isupper(a[m]))
                stable[*pt]=1;
        }
        huan2(b,a,pa,ge,stable,pt);
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        int t=0;
        int *pt=&t;
        int ge[250],stable[250]={0};
        char a[250];
        char b[250][250]={0};
        gets(a);
        char *pa=a;
        huan1(b,a,pa,ge,stable,pt);
        printf("case #%d:\n",i-1);
        printf("%s",b[0]);
        for(int r=1;r<=t;r++)
            printf(" %s",b[r]);
        printf("\n");
    }
}