#include<stdio.h>
#include<stdlib.h>
int a[20];
int cnt=0;
void solve()
{ int n;
  scanf("%d",&n);
 if(n>0)
 { a[cnt++]=n;
 return solve();
  }
  int i=cnt-1;
  printf("%d",a[i]);
  for(i=cnt-2;i>=0;i--)
    printf(" %d",a[i]);
}
int main()
{ solve();
return 0;

}