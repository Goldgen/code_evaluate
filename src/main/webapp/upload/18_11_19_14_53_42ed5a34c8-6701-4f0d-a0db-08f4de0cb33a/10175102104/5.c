#include <stdio.h>
int GCD(int m,int n)
{
   int ans;
   if (m>=n)
      if (m%n==0)
          ans =n;
      else m=m%n , ans = GCD(m,n);
   else
      if (n%m==0)
          ans =m;
      else n=n%m , ans = GCD(m,n);
   return ans;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",GCD(m,n));
    return 0;
}
