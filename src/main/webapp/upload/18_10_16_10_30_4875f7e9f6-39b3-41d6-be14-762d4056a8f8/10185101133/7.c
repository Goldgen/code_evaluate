    #include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int f,e,g;
	if(b>a){
        f = b;
        b = a;
        a = f;
	}
    if(c>a){
        e = c;
        c = a;
        a = e;
    }
    if(d>a){
        g = d;
        d = a;
        a = g;
    }
        printf("%d",a);
	return 0;
}