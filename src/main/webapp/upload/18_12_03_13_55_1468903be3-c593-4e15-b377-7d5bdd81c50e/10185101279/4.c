#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int data[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&data[i][j]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(j<m-1)
        printf("%d ",data[j][i]);
        else
             printf("%d",data[j][i]);
        }
        printf("\n");}
	return 0;
}
