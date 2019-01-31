#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
void change(char *str);
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    for(int i=1;i<=T;i++){
    char a[60];
    gets(a);
    change(a);
    printf("case #%d: %s\n",i-1,a);
    }
	return 0;
}
void change(char *str){
while(*str){
        if(*str=='Z')
    *str='A';
else
    *str+=1;
    str++;
}

}


