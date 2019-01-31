#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d",&n);
int len;
    char a[n][4*n];
    for(int i=0;i<n;i++){
            len=2*n-1+2*(i+1)-1;
        for(int j=0;j<=len;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0; i<n; i++)
        {a[i][2*n-1]='=';
        a[i][4*n-1]=0;}
    int cnt;

    for(int i=0; i<n; i++)
    {
        cnt=1;
        a[i][2*n-1-cnt]=a[i][2*n-1+cnt]=i+49;
        for(int j=i; j>0; j--)
        {
            cnt++;
            a[i][2*n-1-cnt]=a[i][2*n-1+cnt]='+';
            cnt++;
            a[i][2*n-1-cnt]=a[i][2*n-1+cnt]=j+48;
            if(j+48=='1'){
                cnt++;a[i][2*n-1+cnt]=0;
            }
        }
        if(i==0){a[i][2*n-1+2]=0;
            printf("%s",a[i]);}
        else
            printf("\n%s",a[i]);
    }


    return 0;
}


