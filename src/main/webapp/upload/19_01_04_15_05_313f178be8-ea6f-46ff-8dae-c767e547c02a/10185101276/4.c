#include<stdio.h>
#include<string.h>
int get(char*a)
{
    char b;
    int i = 0;
    while(scanf("%c",&b)!=EOF){
            *(a+i) = b;
            i++;
    }
    *(a+i+1) = '\0';
    return i;
}
int main()
{
    char a[200] = {0};
    char b[200] = {0};
    int  c[200] = {0};
    int n = get(a);
    int i = 0,e = 0,num = 0;
    for (i=0; i<n; i++){
        int co = 0;
        if(a[i] == ' '||a[i] == '\t'||a[i] == '\n'){
            continue;
        }
        for(e=0; e<num; e++){
            if(b[e]==a[i]){
                c[e]+=1;
                co = 1;
                break;
            }
        }
        if(co == 0){
            b[num] = a[i];
            c[num] = 1;
            num+=1;
        }
    }
    for(i=0; i<num; i++){
        printf("%c %d; ",b[i],c[i]);
    }
    return 0;
}
