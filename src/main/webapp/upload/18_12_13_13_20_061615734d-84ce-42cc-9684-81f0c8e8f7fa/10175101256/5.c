#include <stdio.h>
#include <string.h>
void Number2Alpha(int num, char* mptr){
/* PreCondition:
 num is an integer in range [1,12]
 PostCondition:
 return the address of a word that represents month with num
 */
    for(int i=0;*(mptr+i+10*(num-1))!='\0';i++){
        printf("%c",*(mptr+i+10*(num-1)));
    }
    printf("\n");

}
int main(){
    int n;
    scanf("%d",&n);
    char s[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    Number2Alpha(n,s);
}