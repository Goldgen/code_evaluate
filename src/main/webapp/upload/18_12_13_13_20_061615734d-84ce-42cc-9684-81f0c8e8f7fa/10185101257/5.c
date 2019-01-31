#include <stdio.h>
#include <string.h>
void Number2Alpha(int num, char* mptr){
    char Mon[12][20] = {"January", "February", "March", "April", "May", "June", "July",
                    "August", "September", "October", "November", "December"};
    strcpy(mptr,(Mon + num - 1));
}
int main(){
    int num;
    char month[12] ={'\0'};
    scanf("%d", &num);
    Number2Alpha(num, month);
    printf("%s", month);
    return 0;
}
