#include <stdio.h>
#include <string.h>
int jud(char a[],int d[]){
    int e,i=0;
    for(e=0;e<=strlen(a);e++){
        if(a[e]==' '||a[e]=='\0'){
           if(e-i>d[0]){
            d[0]=e-i;
            d[1]=e+1;
           }
           i=e+1;
        }
    }
    return d[1];
}
int main()
{
    char a[100];
    int i=0,d[2]={0};
    while(scanf("%c",&a[i])&&a[i]!='\n')i++;
    a[i]='\0';
    int b=jud(a,d);
    char c[d[0]+1];
    for(i=b-d[0]-1;i<=b-1;i++){
        c[i-b+d[0]+1]=a[i];
    }
    c[d[0]]='\0';
    printf("%s\n",c);
    return 0;
}
//abcd sadf kjhfawef iflajjd
//abcd adsdfa aasdf alskdjfaalkd
