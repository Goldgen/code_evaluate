#include<stdio.h>
#include<string.h>
int main(){
    int T;
    scanf("%d", &T);
    getchar();
    for(int x = 0; x < T; ++x){
        char ch[200][200], c, temp[200], con[200][200] = {'\0'}, ex[200][200];
        int i = 0, j = 0, flag = 0, cnt1 = 0, cnt2 = 0;
        while((c = getchar()) != '\n'){
            if(c != ' '){
                if(c < 'A' || c > 'Z')
                    flag = 1;
                ch[i][j] = c;
                j++;
            }
            else{
                ch[i][j] = '\0';
                if(flag == 1)
                    strcpy(con[i], ch[i]);
                else{
                    strcpy(ex[cnt1], ch[i]);
                    ++cnt1;
                }
                j = 0;
                flag = 0;
                i++;
            }
        }
        ch[i][j] = '\0';
        if(flag == 1)
            strcpy(con[i], ch[i]);
        else{
            strcpy(ex[cnt1], ch[i]);
            ++cnt1;
        }
        for(int k = 0; k < cnt1; ++k)
            for(int m = 0; m < cnt1 - 1; ++m)
                if(strcmp(ex[m], ex[m+1])>0){
                    strcpy(temp, ex[m]);
                    strcpy(ex[m], ex[m+1]);
                    strcpy(ex[m+1], temp);
                }
        for(int k = 0; k <= i; ++k){
            if(con[k][0] == '\0'){
                strcpy(con[k], ex[cnt2]);
                ++cnt2;
            }
        }
        printf("case #%d:\n", x);
        for(int k = 0; k <= i; ++k){
            printf("%s", con[k]);
            if(k <= i - 1)
                printf(" ");
            if(k == i)
                printf("\n");
        }
    }
}
