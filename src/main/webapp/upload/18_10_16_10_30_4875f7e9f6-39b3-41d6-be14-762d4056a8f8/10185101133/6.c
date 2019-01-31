    #include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d,e;
	if(b>a){
        d = b;
        b = a;
        a = d;
	}
    if(c>a){
        e = c;
        c = a;
        a = e;
    }
        printf("%d",a);
	return 0;
}
