#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t,h=0;
    scanf("%d",&t);
    getchar();
    while(h<t){
        char str[201];
        char tmp[200][100];
        char s[200][100];
        int i=0,k=0,j=0,count=0;
        int flag=2;
        int real[200]={-1};
        gets(str);
        while(str[i]!='\0'){
            if((str[i]<'A' || str[i]>'Z') && str[i]!=' '){
                flag=1;
            }
            if(str[i]==' '){
                if(flag==1){
                    real[count]=k;
                    count++;
                }
                s[k][j]='\0';
                k++;
                i++;
                j=0;
                flag=0;
                continue;
            }
            s[k][j]=str[i];
            j++;
            i++;
        }
        s[k][j++]='\0';
        if(flag==1)
            real[count]=k;
        int m=0;
        j=0;i=0;
        for(3;i<=k;i++){
            if(i!=real[j]){
                strcpy(tmp[m],s[i]);
                m++;}
            else
                j++;
        }
        char kfc[200];
        for(i=0;i<m-1;i++){
            for(j=0;j<m-1-i;j++){
                if(strcmp(tmp[j],tmp[j+1]) > 0) {
                    strcpy(kfc,tmp[j]);
                    strcpy(tmp[j],tmp[j+1]);
                    strcpy(tmp[j+1],kfc);
                }
            }
        }
        printf("case #%d:\n",h);
        for(i=0,j=0,m=0;i<=k;i++){
            if(i==real[j]){
                printf("%s",s[i]);
                j++;
            }
            else{
                printf("%s",tmp[m]);
                m++;
            }
            printf(i==k?"\n":" ");
        }

        h++;
    }
    return 0;
}
