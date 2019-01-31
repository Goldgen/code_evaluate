#include<stdio.h>

char* strmcpy(char* t, char* s, int m)
{
    for(int i=0; *(s+m)!='\0'; m++, i++){
        *(t+i)=*(s+m);
        *(t+i+1)='\0';
    }
    return t;
}

int main()
{
    char str[81], strr[81];
    int m=0;

    gets(str);
    scanf("%d",&m);
    printf("%s",strmcpy(strr, str, m));
    return 0;
}
