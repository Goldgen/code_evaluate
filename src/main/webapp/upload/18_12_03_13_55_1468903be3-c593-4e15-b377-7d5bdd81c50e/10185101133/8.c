#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Input[80];
    int i=0;
    gets(Input);
    int len=strlen(Input);
    int mmm=len/2;
    if(len%2-1==0){
        for(i=mmm;i>=0;i--){
            if(Input[i]!=Input[len-1-i]){
                printf("False");
                return 0;}
        }
        printf("True");
        return 0;
    }
	else if(len%2==0){
		for(i=mmm-1;i>=0;i--){
            if(Input[i]!=Input[len-1-i]){
                printf("False");
                return 0;}
        }
        printf("True");
	}
    return 0;
}