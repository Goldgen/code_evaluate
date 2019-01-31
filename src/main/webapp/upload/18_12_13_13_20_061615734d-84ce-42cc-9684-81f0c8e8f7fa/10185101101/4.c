#include <stdio.h>
#include <stdlib.h>
char* convert(char* str){
    int i=0;

    while(*(str+i) != '\0'){
        if(*(str+i)== 32)
            *(str+i)=*(str+i);
            
        else if(*(str+i)==90)
        {
            *(str+i)=65;
        }
        else{
        *(str+i)=*(str+i) +1;}
        ++i;
    }
    *(str+i)='\0';
    return str;
}
int main()
{
    int i,count=0;
    char string[15][100];
    scanf("%d",&count);
    for(i=0;i<=count;++i){
        gets(string[i]);
    }
    for(i=1;i<=count;++i){
        printf("case #%d: %s",i-1,convert(string[i]));
        if(i != count)printf("\n");
    }
    return 0;
}
