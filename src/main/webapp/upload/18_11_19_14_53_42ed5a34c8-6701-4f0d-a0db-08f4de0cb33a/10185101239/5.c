int  GDB(int x,int y){
if(y==0)
    return x;

     return GDB (y,x%y);
}
int main()
{int a,b;
 scanf("%d%d",&a,&b);
 printf("%d",GDB(a,b));
return 0;
}