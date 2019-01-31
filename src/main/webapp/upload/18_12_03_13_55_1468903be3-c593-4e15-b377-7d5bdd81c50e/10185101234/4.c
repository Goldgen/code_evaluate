#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

int column;
int row ;

void in(int a[][SIZE] , int n, int m){
 int i,j;
 for(i = 0;i < n;i++){
  for(j = 0;j < m;j++){
   scanf("%d",&a[i][j]);
  }
 }
}

void out(int b[][SIZE] , int n, int m){
 int i,j;
 for(i = 0;i < n;i++){
  for(j = 0;j < m;j++){
   printf("%d",b[i][j]);
  if(j<m-1) printf(" ");
  }
  if(i<n-1)
 printf("\n");
 }
}

void tr(int a[][SIZE], int b[][SIZE]){
 int i,j;
 for(i = 0;i < row;i++){
  for(j = 0; j < column ; j++){
   b[i][j] = a[j][i];
  }
 }
}

int main()
{
 int a[SIZE][SIZE]={0};
 int b[SIZE][SIZE]={0};
 scanf("%d",&column);
 scanf("%d",&row);
 in(a, column , row);
 tr(a,b);
 out(b, row , column);
 return 0;
}
