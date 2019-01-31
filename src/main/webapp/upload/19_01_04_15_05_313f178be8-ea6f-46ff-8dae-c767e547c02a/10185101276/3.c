#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0,e = 0;
    char a[1100] = {0};
    char b[1100] = {0};
    while(1){
        int n = 0;
        scanf("%s",a);
        if(a[0] == '#'){
            break;
        }
        scanf("%s",b);
        for(i=0; i<=strlen(a);i++){
            int co = 1;
            for(e=0; e<strlen(b); e++){
                if(a[i+e]!=b[e]){
                    co = 0;
                    break;
                }

            }
            if(co==1){
                    n+=1;
                    i+=strlen(b)-1;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
