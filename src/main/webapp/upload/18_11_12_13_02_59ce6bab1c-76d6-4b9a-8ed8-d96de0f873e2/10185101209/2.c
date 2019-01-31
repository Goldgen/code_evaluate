#include<stdio.h>
#include<ctype.h>

void function(int a, int b){
    for(int i=0, count=0; a<=b && a<128; a++){
        if(!isgraph(a)){
            count++;
            if(count == b-a){
                printf("NONE");
                break;
            }
            continue;
        }
        i++;
        if(i != 1)
            printf("\n");
        printf("%-3d     %c", a, a);
    }
}

int main()
{
    int st=0, ed=0;

    scanf("%d %d", &st, &ed);
    function(st, ed);
    return 0;
}
