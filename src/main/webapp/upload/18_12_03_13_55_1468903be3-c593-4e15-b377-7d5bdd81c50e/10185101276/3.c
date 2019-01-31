#include <stdio.h>
#include <string.h>
void chang(char a[],char b[],char c[],int la){
    int i;
    for(i=0;i<=2*(la-1);i+=2){
        c[i]=a[i/2];
        c[i+1]=b[i/2];
    }
}
int main()
{
    char a[80],b[80];
    scanf("%s %s",a,b);
    char c[160];
    int la,lb,i;
    la=strlen(a);
    lb=strlen(b);
    if(lb>=la){
        chang(a,b,c,la);
        for(i=2*la;i<la+lb;i++){
            c[i]=b[i-la];
        }
    }
    else {
        chang(a,b,c,lb);
        for(i=2*lb;i<la+lb;i++){
            c[i]=a[i-lb];
    }
    }
    printf("%s",c);
    return 0;
}
