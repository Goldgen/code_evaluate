#include <stdio.h>
#include <string.h>
double result = 0;
long long int array[100];
int Fibonacci(int n){
    if(n == 60)
        return 0;
    array[n] = array[n-2] + array[n-1];
    Fibonacci(n+1);
}

int main(int argc, char* argv[]){

    memset(array, 100, sizeof(int));
    array[1] = 1;
    array[2] = 1;
    Fibonacci(3);
    for(int i = 2; i <= 51; i++){
        result += (array[i+1] + 0.0)/(array[i] + 0.0);

    }
    printf("%.2f", result);
}
