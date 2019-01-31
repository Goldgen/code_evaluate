#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100],a[10][10],b[10];
    int i,j,k,len,flag;
    gets(s);
    len=strlen(s);
    j=0;
    k=0;
    flag=0;
    for(i=0;i<len+1;i++)   //??i<len+1
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                a[k][j]=s[i];
                j++;
                flag=1;
        }
        else if(flag==0) continue;
        else{
                a[k][j]='\0';
                k++;
                j=0;
                flag=0;
        }
        //for(i=0;i<k;i++) puts(a[i]);
        strcpy(b,a[0]);//?????
        for(i=1;i<k;i++)
            if(strlen(a[i])>strlen(b))
                strcpy(b,a[i]);
        puts(b);
    return 0;
}
