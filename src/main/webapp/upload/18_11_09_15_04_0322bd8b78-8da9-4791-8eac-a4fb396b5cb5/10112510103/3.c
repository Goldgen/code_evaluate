#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    int b=0;
    a=getchar();
    while(a!=EOF){
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("yes");
            b=1;
            break;
        }
        else
            a=getchar();
    }
    if(b==0)
        printf("no");
    return 0;
}
