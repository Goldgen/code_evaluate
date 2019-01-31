#include <stdio.h>
#include <stdlib.h>

int Run(/*n*/int n){
    int a;
    static int all=0;
    a=n%10;
    all+=a;

    if(n/10==0)
        printf("%d",all);
    else
        return Run(n/10);
}
main(){
    int n;
    scanf("%d",&n);
    Run(n);

}
