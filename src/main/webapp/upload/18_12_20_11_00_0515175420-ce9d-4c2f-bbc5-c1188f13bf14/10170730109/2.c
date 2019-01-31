#include <stdio.h>
#include <string.h>
int Input(char* arr){
    int i=0;
    char c=0;
    for(i=0;c!='\n';i++){
        scanf("%s",(arr+i));
        c=getchar();
    }
    return i-1;
}
void Sort(char* a, int n){
    char temp=0;
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(strcmp(a+i,a+j)<0){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}

int main()
{
    char p[400][201];
    int n=0,i=0,j=0,count=0;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++) {
        count=Input(p[0]);
        Sort(p[0],n);
        printf("case #%d:\n",i);
        for(j=0;j<count-1;j++){
            printf("%s \n",p[j]);
        }
        printf("%s",p[j]);
    }
    return 0;
}