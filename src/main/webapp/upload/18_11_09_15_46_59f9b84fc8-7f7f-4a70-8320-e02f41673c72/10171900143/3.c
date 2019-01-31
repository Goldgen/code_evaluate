#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char a[26][26];
    int n;
    scanf("%d",&n);
    int mid=n-1;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            a[i][j]=' ';
        }
    }//A=65;
    for(int i=0;i<n;i++){int j;
        for(j=0;j<i+1;j++){
            a[i][mid-j]=a[i][mid+j]=i+65;

        }a[i][mid+j]=0;printf("%s\n",a[i]);
    }
    for(int i=n;i<2*n-1;i++){int j;
        for(j=0;j<2*n-1-i;j++){
            a[i][mid-j]=a[i][mid+j]=i+65;
        }a[i][j+mid]=0;if(i<n+n-2)printf("%s\n",a[i]);else printf("%s",a[i]);
    }

    return 0;
}




