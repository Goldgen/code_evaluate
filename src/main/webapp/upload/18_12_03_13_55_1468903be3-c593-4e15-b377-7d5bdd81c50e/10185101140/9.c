#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 100

void Search(const char s[], size_t n, char x, int a[]);

int main()
{
    char str[ARRA_SIZE] = {'\0'};
    char interest[ARRA_SIZE] = {'\0'};
    gets(str);
    size_t len1 = strlen(str);
    scanf("%s",interest);
    size_t len2 = strlen(interest);

    printf("%s: ",interest);

    int Loc[ARRA_SIZE] = {0};

    Search(str, len1-len2+1, interest[0], Loc);

    int i = 0, j, num;
    int lenLoc = 0;
    while(Loc[i]!=(0)){
        lenLoc++;
        i++;
    }

    int count = 0, firstRealLoc = -1;
    if (lenLoc>0){
        for (i=0; i<lenLoc; i++){
            num = Loc[i]-1;//-1???????
            for (j=0; j<len2; j++){
                if (interest[j]!=str[num+j])
                    break;
                if (j==len2-1) count++;
                if ((j==len2-1)&&(count==1)) firstRealLoc = num;
            }
        }
    }

    printf("%d time(s), first at %d",count,firstRealLoc);

    return 0;
}

void Search(const char s[], size_t n, char x, int a[]){
    int i; int j;
    for (i=0, j=0; i<n; i++){
        if (s[i]==x) {
            a[j] = i+1;//???????+1?
            j++;
        }
    }
    return;
}
