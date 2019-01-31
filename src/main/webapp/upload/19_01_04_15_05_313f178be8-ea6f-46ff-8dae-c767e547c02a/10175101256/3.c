#include <stdio.h>
#include <string.h>
int main(){
    char str1[2000],str2[2000],str[2000];
    scanf("%s",str1);
while(strcmp(str1,"#")!=0){
    getchar();
    scanf("%s",str2);
    getchar();
    int length=strlen(str2),n=0;
    if(length<=strlen(str1))
    for(int i=0;i<=strlen(str1)-length;i++){
        for(int j=i;j<length+i;j++){
            str[j-i]=str1[j];
        }
        str[length]='\0';
        if(strcmp(str,str2)==0){
            n++;
            i+=length-1;
            }
    }
    printf("%d\n",n);
    scanf("%s",str1);
    }
}
