#include <stdio.h>
int ch(char *ps)
{
    int i=0;
    for(i=1;*ps!='\0';i++){
       if(*ps=='Z'){
        *ps='A';
       }
       else *ps+=1;
       ps++;
    }
}
int main()
{
    int n=0,i=0;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        ch(s);
        printf("case #%d: %s\n",i,s);
    }
    return 0;
}

