#include <stdio.h>
#include <stdlib.h>
int main()
{
	while(1){
    double a=0,b=0;
    int flag=0;
    int cnt=0;
    char c,op;
    while(c=getchar()){
        if(c=='+'||c=='-'||c=='*'||c=='/'){
            op=c;
            break;
        }
        else if(c=='.'){
            flag=1;
        }
        else{
            if(flag)++cnt;
            a=a*10+c-'0';
        }
    }
    while(cnt--)a/=10.0;
    flag=0;
    cnt=0; 
    while((c=getchar())){
        if(c=='\n')break;
        else if(c=='.'){
            flag=1;
        }
        else{
            if(flag)++cnt;
            b=b*10+c-'0';
        }
    }
    while(cnt--)b/=10.0;
    if(op=='+')printf("%.3lf",a+b);
    else if(op=='-')printf("%.3lf",a-b);
    else if(op=='*')printf("%.3lf",a*b);
    else printf("%.3lf",a/b);
	printf("\n");
	}
    return 0;
}
