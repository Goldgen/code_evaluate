#include<stdio.h>

int main()
{
    char str[1001];
    int i,j;
    int count;

    gets(str);
    for(i=0; str[i]!='\0'; i++){
        for(j=i+1, count=1;j<1001;j++){
            if(str[i]==str[j])
                count++;
        }
        printf("%c %d; ",str[i], count);
    }
}