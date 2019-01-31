#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int middle = 0;
    if(a<b){
        if(c<a){
            middle = a;
        }
        else{
            if(c>b)
                middle = b;
            else
                middle = c;
        }
       }
    else{
        int blank = 0;
        blank = a;
        a = b;
        b = blank;
        if(c<a){
            middle = a;
        }
        else{
            if(c>b)
                middle = b;
            else
                middle = c;
        }
    }
    printf("%d",middle);
    return 0;
}
