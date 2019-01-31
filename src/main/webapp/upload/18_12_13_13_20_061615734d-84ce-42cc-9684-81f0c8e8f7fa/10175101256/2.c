#include <stdio.h>
char* strmcpy(char* t, char* s, int m){
/* PreCondition:
 t points to an array,
 s points to another array,
 m is less than length of string s
 PostCondition:
 copy s starting from m into t,
 and return t
 */
    int j=0;
    for(int i=m;*(s+i)!='\0';i++){
        *(t+j)=*(s+i);
        j++;
    }
    *(t+j)='\0';
    return t;

}
int main(){
    char s[100],t[100];
    int m;
    gets(s);
    scanf("%d",&m);
    strmcpy(t,s,m);
    printf("%s\n",t);
}