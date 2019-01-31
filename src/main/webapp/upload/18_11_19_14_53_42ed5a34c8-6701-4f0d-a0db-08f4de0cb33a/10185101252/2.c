#include <stdio.h>

int func(int num){

    if(num == 0)
        return 0;
    return num%10 + func(num/10);

}

int main(int argc, char* argv[]){

    int num;
    scanf("%d", &num);
    printf("%d", func(num));

    return 0;
}
