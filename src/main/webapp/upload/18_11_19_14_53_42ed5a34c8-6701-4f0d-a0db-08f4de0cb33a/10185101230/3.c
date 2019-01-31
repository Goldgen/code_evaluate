#include <stdio.h>
void Inverse(int a[ ],int zuo,int you) {
    int cun=0;
    if(zuo>=you) return;
    cun=a[zuo];
    a[zuo]=a[you];
    a[you]=cun;
    Inverse(a,zuo+1,you-1);
}

void main( ) {
    int i,n=0;
    while(scanf("%d",&i)!=EOF)
	{
		int a[100]={0};
    while(i) {
        a[n++]=i;
        scanf("%d",&i);
    }
    Inverse(a,0,n-1);
    for(int j=0; j<n-1;j++)
		if(a[j]!=0)
        {printf("%d ", a[j]);}
    printf("%d",a[n-1]);
	}
}

