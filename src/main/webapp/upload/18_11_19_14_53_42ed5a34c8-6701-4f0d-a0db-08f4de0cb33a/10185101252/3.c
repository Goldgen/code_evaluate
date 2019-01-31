#include <stdio.h>

int func(){
    int num;
    scanf("%d", &num);
    if(num == 0)
        return 0;
    func();
    printf("%d ", num);

}

int main(int argc, char* argv[]){

    int num;
    scanf("%d", &num);
    func();
    printf("%d", num);

    return 0;
}
