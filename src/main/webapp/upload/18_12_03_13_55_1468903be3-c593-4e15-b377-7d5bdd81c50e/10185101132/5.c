#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 90

//Generate All Possible Rotation
void genrtAllRotation(/* in*/const char strIn[MAXSIZE],
                             int strnLen,
                      /*out*/char libOut[MAXSIZE][MAXSIZE]);

int strSrc(/* in*/const char key[MAXSIZE],
                  const char lib[MAXSIZE][MAXSIZE],
                  int strnLen);

int main()
{
    char src[MAXSIZE];
    char allR[MAXSIZE][MAXSIZE];
    char key[MAXSIZE];

    int isRotation = 0;;

    scanf("%s%s", key, src);

    int keyLen = strlen(key);
    int srcLen = strlen(src);
    if(keyLen == srcLen){
        genrtAllRotation(src, keyLen, allR);
        if(strSrc(key, allR, keyLen)){
            isRotation = 1;
        }
    }

    if(isRotation){
        printf("\"%s\" is a rotation of \"%s\"", key, src);
    }else{
        printf("\"%s\" is NOT a rotation of \"%s\"", key, src);
    }

    return 0;
}

void genrtAllRotation(/* in*/const char strIn[MAXSIZE],
                             int strnLen,
                      /*out*/char libOut[MAXSIZE][MAXSIZE])
{
    strcpy(libOut[0], strIn);

    int i;
    for(i = 1; i < strnLen; i++){
        libOut[i][0] = libOut[i-1][strnLen-1];
        strncpy(libOut[i] + 1, libOut[i - 1], strnLen - 1);
    }
}

int strSrc(/* in*/const char key[MAXSIZE],
                  const char lib[MAXSIZE][MAXSIZE],
                  int strnLen)
{
    int i;
    for(i = 0; i < MAXSIZE; i++){
        if(strncmp(key, lib[i], strnLen) == 0){
            return 1;
        }
    }
    return 0;
}