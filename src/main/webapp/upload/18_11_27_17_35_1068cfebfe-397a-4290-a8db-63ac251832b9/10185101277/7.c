#include<stdio.h>

int main(){
int n,m,i,temp;
scanf("%d",&n);
int s[n];
for(i=0;i<n;i++){
    scanf("%d",&s[i]);
}
scanf("%d",&m);
for(i=0;i<n;i++){
    if(s[i]==m){
        printf("%d",i);
        break;
    }
    else
        temp++;
}
for(i++;i<n;i++){
    if(s[i]==m){
        printf(" %d",i);
    }
    else
        temp++;
}
if(temp==n)
    printf("ERROR");
return 0;
}