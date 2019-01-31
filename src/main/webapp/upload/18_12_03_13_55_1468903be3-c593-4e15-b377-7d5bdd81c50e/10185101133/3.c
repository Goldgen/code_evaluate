#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char message_1[80];
    char message_2[80];
    int i=0;
    scanf("%s",message_1);
    scanf("%s",message_2);
    int min=(strlen(message_1)<strlen(message_2))?strlen(message_1):strlen(message_2);
    int max=(strlen(message_1)<strlen(message_2))?strlen(message_2):strlen(message_1);
    for(i=0;i<min;i++){
        printf("%c%c",message_1[i],message_2[i]);
    }
    if(max==strlen(message_1)){
        for(i=min;i<max;i++)
            printf("%c",message_1[i]);
    }
    else{
        for(i=min;i<max;i++)
            printf("%c",message_2[i]);
    }
    return 0;
}
