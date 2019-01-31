#include <stdio.h>
#include <string.h>
void rotate(int* p, int n, int m){
/* PreCondition:
 p points to an array with n integers, m is also an integer
 PostCondition:
 rotate m elements of an array
 */
    int b[m];
    for(int i=0;i<m;i++){
        b[i]=*(p+i+n-m);
    }
    for(int i=n-1;i>=m;i--){
        *(p+i)=*(p+i-m);
    }
    for(int i=0;i<m;i++){
        *(p+i)=b[i];
    }
    for(int i=0;i<n;i++){
        if(i)
            printf(" ");
        printf("%d",*(p+i));
    }
    printf("\n");
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    rotate(a,n,m);
}