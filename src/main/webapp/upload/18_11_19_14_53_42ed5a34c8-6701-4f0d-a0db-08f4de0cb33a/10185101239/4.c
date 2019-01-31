int jinzhi(int n)
{int a;
if((a = n / 2) > 0)
jinzhi (a);
printf("%d", n % 2);}
int main()
{
int n;
scanf("%d",&n);
jinzhi(n);
return 0;}
