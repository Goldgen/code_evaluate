#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int fh(char* p1)
{
    int n = 0;
    while(*p1 != '\0'){
        if(!isalpha(*p1))
            n++;
        p1++;
    }
    if(n == 0) return 0;
    else return 1;
}

int main(void)
{
    int T;
    scanf("%d",&T);
    for(int i = 0;i < T;i++){
        char s1[205] = "\0";
        char temp[205] = "\0";
        char szm[200][200] = {"\0"};
        if(i == 0)getchar();
        gets(s1);
        char* ptr1 = s1,*ptr2 = NULL;
        int js1 = 1,js2 = 0,js4 = 0,js5 = 1,js6 = 0;
        ptr2 = strchr(s1,' ');
        *ptr2 = '\0';
        strcpy(szm[0],s1);
        *ptr2 = ' ';
        while(ptr2 != NULL){
            ptr1 = ptr2+1;
            ptr2 = strchr(ptr1,' ');
            if(ptr2 != NULL){
                *ptr2 = '\0';
            }
            strcpy(szm[js1],ptr1);
            js1++;
        }
        while(js4 != js5){
            js4 = js5;
            for(js2 = 0;js2 < js1;js2++){
                if(fh(szm[js2]))
                    continue;
                if(fh(szm[js2+1])){
                    if(strcmp(szm[js2],szm[js2+2]) < 0){
                        strcpy(temp,szm[js2]);
                        strcpy(szm[js2],szm[js2+2]);
                        strcpy(szm[js2+2],temp);
                        js4++;
                    }
                    js2++;
                }
                else if(fh(szm[js2+1]) == 0){
                    if(strcmp(szm[js2+1],szm[js2]) < 0){
                        strcpy(temp,szm[js2]);
                        strcpy(szm[js2],szm[js2+1]);
                        strcpy(szm[js2+1],temp);
                        js4++;
                    }
                }
            }
        }
        printf("case #%d:\n%s",i,szm[0]);
        for(js6 = 1;js6 <= js1;js6++){
            if(szm[js6][0] != '\0'&&js6 != js1)
                printf(" %s",szm[js6]);
            else if(szm[js6][0] != '\0'&&js6 == js1)
                printf(" %s\n",szm[js6]);
        }
    }
    return 0;
}
