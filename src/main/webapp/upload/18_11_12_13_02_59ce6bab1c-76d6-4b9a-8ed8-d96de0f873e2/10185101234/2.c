int main()
{
int st;
int ed;
scanf("%d %d",&st,&ed);
func(st,ed);
return 0;
}


void func(int m,int p)
{
    int n;
    if(p<33||m>126)
	printf("NONE");

    else
        {
            if(m<33)  m=33;
	        if(p>126) p=126;
            for(n=m;n<=p;++n)
               {
                 if(n/100==0)
		         printf("%d      %c",n,n);
		         else
		             printf("%d     %c",n,n);
            printf("\n");}
	    }
}