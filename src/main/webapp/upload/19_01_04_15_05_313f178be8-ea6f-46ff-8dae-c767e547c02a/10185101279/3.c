#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find(char str[],char substr[]);
int main(){

char str[1010];
char substr[1010];
while((scanf("%s",str))>0&&strcmp(str,"#")!=0){
      scanf("%s",substr);
int x=find(str,substr);
    if(x<=strlen(str)/strlen(substr))
    printf("%d\n",x);
    else
        printf("%d\n",strlen(str)/strlen(substr));
}
return 0;

}
int find(char str[],char substr[]){
  int i,j;
  int count=0;
  for(i=0;i<strlen(str);i++){
        int t=i;
    for(j=0;j<strlen(substr);j++,t++){
        if(str[t]!=substr[j])
        break;
    }
  if(j==strlen(substr))
    count++;
  }
  return count;
}
