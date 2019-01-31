#include <stdio.h>
#include <ctype.h>

int a, b;

int main(int argc, char* argv[]){

    int counts = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        int c = isgraph(i);
        if(c){
            printf("%-8d%c", i, i);
            counts++;
            c = isgraph(i+1);
            if(c && i+1 <= b)
                printf("\n");
        }

    }
    if(!counts)
        printf("NONE");

}
