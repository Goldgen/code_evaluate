#include <stdio.h>
// S>C>R>S

int compare(char a, char b){
    if(a == b){
        return 0;
    }else if((a == 'S' && b == 'C') || (a == 'C' && b == 'R') || (a == 'R' && b == 'S')){
        return 1;
    }
    return -1;
}

int main(int argc, char* argv[]){

    char a, b;
    scanf("%c %c", &a, &b);
    int result = compare(a, b);
    if(result == 1){
        printf("Alice");
    }else if(result == 0){
        printf("Tie");
    }else{
        printf("Bob");
    }

    return 0;
}
