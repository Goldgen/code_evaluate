#include<stdio.h>
int Rev(){
    int n;
    scanf("%d",&n);
    if(n>0){
        Rev()?printf(" %d",n):printf("%d",n);
    }
    return n;
}
int main(){
    Rev();
    return 0;
}
