#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b; 
}
void fun(int a[], int n, int m)
{
    int i, j;
	
    
    for(i=n-m-1, j=0; j<i; i--, j++)
        swap(&a[i], &a[j]); 
    for(i=n-1, j=n-m; j<i; i--, j++)
        swap(&a[i], &a[j]); 
	for(i=n-1, j=0; j<i; i--, j++)
        swap(&a[i], &a[j]);  
}
int main()
{
	int n,m,i,a[90];
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	fun(a,n,m);
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1];
    return 0;
}