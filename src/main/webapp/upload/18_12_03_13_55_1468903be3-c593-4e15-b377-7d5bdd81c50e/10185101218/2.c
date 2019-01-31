#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n,js1 = 0,js2,js3 = 0,js4 = 1,js5;
    scanf("%d",&n);
    getchar();
    char text1[n][31];
    char text2[31];
    while(js1 < n&&gets(text1[js1]) != NULL){
        js1++;
    }
    while(js3 != js4){
        js3 = js4;
        for(js2 = 0;js2 < n-1;js2++){
            if(strcmp(text1[js2+1],text1[js2]) > 0){
                strcpy(text2,text1[js2]);
                strcpy(text1[js2],text1[js2+1]);
                strcpy(text1[js2+1],text2);
                js4++;
            }
        }
    }
    for(js5 = 0;js5 < n;js5++){
            printf("%s\n",text1[js5]);
    }
    return 0;
}

