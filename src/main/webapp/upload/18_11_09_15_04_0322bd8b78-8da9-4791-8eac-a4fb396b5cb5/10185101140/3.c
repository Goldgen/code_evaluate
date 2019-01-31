#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{
    char le;
    while((le=tolower(getchar()))!=EOF){
        if(le=='a'||le=='e'||le=='i'||le=='o'||le=='u'){
            printf("yes");
            return 0;
        }
    }
    printf("no");

    return 0;
}
