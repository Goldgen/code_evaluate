#include <stdio.h>

int func(int num){
    if(num == 0)
        return 0;
    func(num/2);
    printf("%d", num%2);
}

int main(int argc, char* argv[]){

    int num;
    scanf("%d", &num);
    func(num);


    return 0;
}
