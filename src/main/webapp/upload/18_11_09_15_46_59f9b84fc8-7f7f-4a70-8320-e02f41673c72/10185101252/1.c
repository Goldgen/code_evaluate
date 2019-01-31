#include <stdio.h>
#include <string.h>
int count = 0;
int main(int argc, char* argv[]){

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i %10 == 6){
            if(count != 0)
                printf(" ");
            printf("%d", i);
            count++;
        }
    }

}
