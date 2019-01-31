#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int larger(char *, char *);
int main()
{
    int number;
    int m=0;
    scanf("%d",&number);
    getchar();
    int rank[100];
    int swap;
    char names[number+4][31];
    for(int i=1; i<=number; i++){
        rank[i]=i;
    }
    for(int k=1; k <= number; k++){
        gets(names[k]);
    }
    for(int j=2; j<=number; j++){
        m=j;
        for( ; m>1; m--){
            if(larger(names[rank[m]],names[rank[m-1]])>0){
                swap=rank[m];
                rank[m]=rank[m-1];
                rank[m-1]=swap;
            }
        }
    }
    for(int i=1; i<number+1; i++){
        puts(names[rank[i]]);
    }
}

int larger(char*array1,char*array2){
     int Larger;
     Larger= strcmp(array1,array2);
     return Larger;
}
