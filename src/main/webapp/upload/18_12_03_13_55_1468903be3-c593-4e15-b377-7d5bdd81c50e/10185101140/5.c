#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 90

void Search(const char s[], size_t n, char x, int a[]);

int main()
{
    char S1[ARRA_SIZE] = {'\0'}, S2[ARRA_SIZE] = {'\0'},
        S3[ARRA_SIZE*2] = {'\0'};
    scanf("%s",S1);
    scanf("%s",S2);

    printf("\"%s\" is ",S1);

    strcpy(S3,S2);
    size_t len1 = strlen(S1), len2 = strlen(S2);
    int Loc[ARRA_SIZE] = {0},
        i=0, num, j, lenLoc = 0, count = 0;
    if (len1==len2){
        strcat(S3,S2);
        Search(S3, len2, S1[0], Loc);

        while(Loc[i]!=(0)){
            lenLoc++;
            i++;
        }

        if(lenLoc==0)
            printf("NOT ");
        else {
            for (i=0; i<lenLoc; i++){
                num = Loc[i]-1;
                for (j=1; j<len1; j++){
                    if(S1[j]!=S3[num+j])
                        break;
                    if (j==len1-1) count++;
                }
            }
            if (count==0) printf("NOT ");
        }
    }
    else printf("NOT ");
    printf("a rotation of \"%s\"",S2);
    return 0;
}

void Search(const char s[], size_t n, char x, int a[]){
    int i, j;
    for (i=0, j=0; i<n; i++){
        if (s[i]==x){
            a[j++] = i+1;//xia biao bei -1 le
        }
    }
    return ;
}
