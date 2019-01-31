#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001],b[1001];
    int n;
    int i,j,in;
    scanf("%s",a);
    while(strcmp(a,"#")!=0){
        scanf("%s",b);
        if(strcmp(b,"#")==0)
            break;
        if(strlen(a)<strlen(b)){
            printf("0\n");
            scanf("%s",a);
            continue;
        }
        n=0;
        for(i=0;i<strlen(a)-strlen(b)+1;i++){
            in=0;
            for(j=0;j<strlen(b);j++){
                if(a[i+j]==b[j]){
                    in=1;
                }
                else{
                    in=0;
                    break;
                }
            }
            if(in==1){
                n++;
                i+=strlen(b)-1;
            }
        }
        printf("%d\n",n);
        scanf("%s",a);
    }
    return 0;
}
