#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ch[2][80],Ch1[160];
    int i;
    scanf("%s %s",&Ch[0],&Ch[1]);
    for(i=0;i<160;i=i+2){
        Ch1[i]=Ch[0][i/2];
        Ch1[i+1]=Ch[1][i/2];
    }
    printf("%s",Ch1);
}
