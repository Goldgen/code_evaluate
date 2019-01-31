#include <stdio.h>
#include <string.h>

char month[15][20] = {
    "",      "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

void Number2Alpha(int num, char* mptr){
    int len = strlen(month[num]);
    for(int i = 0; i < len; i++)
        mptr[i] = month[num][i];
        mptr[len] = 0;
}

int main(){

    int n;
    char str[1000];
    scanf("%d", &n);
    Number2Alpha(n, str);
    printf("%s", str);
    return 0;
}
