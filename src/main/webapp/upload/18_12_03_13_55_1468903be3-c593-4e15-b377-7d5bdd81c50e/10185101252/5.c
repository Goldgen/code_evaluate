#include <stdio.h>
#include <string.h>

int left(char arr[], int i){

    int len = strlen(arr);
    arr[len] = arr[i];
    arr[len+1] = '\0';
    return 0;
}

int main(int argc, char* argv[]){

    int result = 0;
    char str1[400], str2[400];
    int len1, len2;

    scanf("%s", str1);
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    for(int i = 0; i < len1; i++){
        if(len1 != len2)
            break;
        if(strcmp(str1+i, str2) == 0){
            result = 1;
            break;
        }
        left(str1, i);

    }
    str1[len1] = '\0';
    if(0 == result){
        printf("\"%s\" is NOT a rotation of \"%s\"", str1, str2);
    }else{
        printf("\"%s\" is a rotation of \"%s\"", str1, str2);
    }

    return 0;
}
