#include <stdio.h>
#include <string.h>

int get(){
    char c = getchar();
    if('?' == c)
        return 0;
    get();
    printf("%c", c);

}

int main(int argc, char* argv[]){

    get();

    return 0;
}
