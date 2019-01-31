#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char deli[]=" ";
    char str[81];
    gets(str);
    char *pword[81];
    int num[81];
    int n=0;
    int maxlen=0;
    int maxplace=0;
    char *pfind=strtok(str,deli);
    do
    {
        pword[n]=pfind;
        num[n]=strlen(pfind);
        n++;
        pfind = strtok(NULL,deli);
    }while(pfind);
     for(int i=0;i<n;i++){
        if (num[i]>maxlen){
            maxlen=num[i];
            maxplace=i;
        }
    }
    printf("%s\n",pword[maxplace]);
    return 0;
}
