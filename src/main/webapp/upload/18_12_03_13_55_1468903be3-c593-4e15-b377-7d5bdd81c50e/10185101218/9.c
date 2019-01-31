#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char in[],int n)
{
    char temp[82] = "0";
    temp[0]=in[n-1];
    strcat(temp,in);
    strncpy(in,temp,n);
    in[n-1] = 0;
}

int main()
{
    char s1[80];
    char s2[80];
    gets(s1);
    gets(s2);
    char* p1 = strstr(s1,s2);
    int n = 0;
    if(p1 == NULL){
        printf("%s: 0 time(s), first at -1",s2);
    }
    else{
        char* p2 = &s1[0];
        int di = p1-p2;
        while(p1 != NULL){
            for(int js = 0;js < p1-p2+strlen(s2);js++)
                fun(s1,strlen(s1));
            p1 = strstr(s1,s2);
            n++;
        }
        printf("%s: %d time(s), first at %d",s2,n+1,di);
    }
    return 0;
}
