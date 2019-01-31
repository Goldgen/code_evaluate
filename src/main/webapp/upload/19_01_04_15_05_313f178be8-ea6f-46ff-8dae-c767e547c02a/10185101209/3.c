#include<stdio.h>
#include<stdbool.h>

int main()
{
    char strA[1001],strB[1001];
    int i=0,j=0,m,n;
    int count=0;
    bool judge=true;

    while((strA[i]=getchar())!=' '){
        if(strA[i]=='#')
            return 0;
        i++;
    }
    strA[i]='\0';
    while((strB[j]=getchar())!='\n')
        j++;
    strB[j]='\0';
    for(m=0; m<i; m+=j){
        for(n=0; n<j; n++){
            judge=true;
            if(strA[m+n]!=strB[n])
                judge=false;
        }
        if(judge)
            count++;
    }
    printf("%d",count);
    return 0;
}
