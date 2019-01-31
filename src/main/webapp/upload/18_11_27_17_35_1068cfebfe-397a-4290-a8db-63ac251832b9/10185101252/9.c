#include <stdio.h>
#include <string.h>

struct Num{
    char arr[1001];
    int len;
};
typedef struct Num BigNum;

char temp[1001];
BigNum num1, num2;

BigNum init(char* temp){
    BigNum num;
    memset(num.arr, 0, sizeof(num.arr));
    num.len = strlen(temp);
    for(int i = 0; i < num.len; i++)
        num.arr[i] = temp[num.len-i-1] - '0';
    return num;
}

BigNum add(BigNum num1, BigNum num2){

    BigNum result;
    memset(result.arr, 0, sizeof(result.arr));
    result.len = num1.len > num2.len? num1.len: num2.len;
    for(int i = 0; i < result.len; i++){
        result.arr[i] += num1.arr[i] + num2.arr[i];
        result.arr[i+1] += result.arr[i] / 10;
        result.arr[i] %=10;
        //printf("\t\t%d %d %d\n", num1.arr[i], num2.arr[i], result.arr[i]);
    }
    if(result.arr[result.len] != 0)
        result.len++;

    return result;
}

int main(int argc, char* argv[]){

    scanf("%s", temp);
    num1 = init(temp);
    scanf("%s", temp);
    num2 = init(temp);
    BigNum result = add(num1, num2);


    for(int i = result.len-1; i >= 0; i--){
        printf("%d", result.arr[i]);
    }


    return 0;
}
