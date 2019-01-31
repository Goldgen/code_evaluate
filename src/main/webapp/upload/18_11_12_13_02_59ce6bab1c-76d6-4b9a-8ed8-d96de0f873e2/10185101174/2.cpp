      #include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define SPACE ' '
#define WIDTH 5

void a(char ,int );
int main(){
    int st;
    int ed;
    scanf("%d %d",&st,&ed);
    if(ed<=32){
        printf("NONE");
    }
    else{
    for( ;st<=ed;st++){
        if(isgraph(st)){
            printf("%-3d",st);
            a(SPACE,WIDTH);
            printf("%c",st);
            if(st!=ed){
                printf("\n");
            }
        }
    }
    }
}
void a(char m,int n){
    for(int c=0;c<n;c++)
        putchar(m);
}
