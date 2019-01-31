
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* i2a(char* p,int n);


int main()
{
    long long int integer;
    int a=0;
    char ch[40]={'\0'};
    char zh[40]={'\0'};
    scanf("%d",&integer);
    i2a(ch,integer);
    for(int i=strlen(ch)-1; i>=0; i--){
        zh[a]=ch[i];
        a++;
    }
    printf("%s",zh);
}
char* i2a(char* p,int n){
   if(n>0){
    *(p++)='0'+n%10;
    i2a(p,n/10);
   }
   if(n>0)
   p--;
    return p;
}
