#include<stdio.h>

int main()
{
    char letter='A'-1;
    int n=0;
    int i=0;
    int j=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        letter+=1;
        for (i=1; i<=n-j; i++) {
            printf(" ");
        }
        for (i=1; i<=2*j-1; i++) {
        printf("%c",letter);
        }
        printf("\n");
        
    }
    for(j=n-1;j>0;j--){
        letter+=1;
        for (i=1; i<=n-j; i++) {
            printf(" ");
        }
        for (i=1;i<=2*j-1; i++) {
            printf("%c",letter);
        }
        if(j>1)
        printf("\n");
       
        
    }
        
    
    
    
    
    
    return 0;
}


