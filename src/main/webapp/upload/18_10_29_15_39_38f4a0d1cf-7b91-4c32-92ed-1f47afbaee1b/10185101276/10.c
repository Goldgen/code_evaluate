#include <stdio.h>
int main()
{
    int n=0,g=0,e=0,a=0,b=0,c=0,d=0,f=0,h=0,i=0;
    scanf("%d",&n);
    printf("{}\n{0}");
    if(n>=2){
    for (a=1;a<n;a++)
    {
        printf("\n{%d}",a);
        if(a!=0)printf("\n{0,%d}",a);
    }if(n>=3){
        for(a=1;a<n-1;a++)
        for (b=a+1;b<=n-1;b++){printf("\n{%d,%d}",a,b);printf("\n{0,%d,%d}",a,b);}
        /*if(n>=4){
            for(a=1;a<n-2;a++)
            for(b=a+1;b<n-1;b++)
            for(c=b+1;c<=n-1;c++){
                printf("\n{%d,%d,%d}",a,b,c);
                printf("\n{0,%d,%d,%d}",a,b,c); }
            if(n>=5){
            for(a=1;a<n-3;a++)
            for(b=a+1;b<n-2;b++)
            for(c=b+1;c<n-1;c++)
            for(d=c+1;d<=n-1;d++){
                printf("\n{%d,%d,%d,%d}",a,b,c,d);
                printf("\n{0,%d,%d,%d,%d}",a,b,c,d); }
            if(n>=6){
            for(a=1;a<n-4;a++)
            for(b=a+1;b<n-3;b++)
            for(c=b+1;c<n-2;c++)
            for(d=c+1;d<n-1;d++)
            for(e=d+1;e<=n-1;e++) {
                printf("\n{%d,%d,%d,%d,%d}",a,b,c,d,e);
                printf("\n{0,%d,%d,%d,%d,%d}",a,b,c,d,e); }
            if(n>=7){
            for(a=1;a<n-5;a++)
            for(b=a+1;b<n-4;b++)
            for(c=b+1;c<n-3;c++)
            for(d=c+1;d<n-2;d++)
            for(e=d+1;e<n-1;e++)
            for(f=e+1;f<=n-1;f++){
                printf("\n{%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f);
                printf("\n{0,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f); }
            if(n>=8){
            for(a=1;a<n-6;a++)
            for(b=a+1;b<n-5;b++)
            for(c=b+1;c<n-4;c++)
            for(d=c+1;d<n-3;d++)
            for(e=d+1;e<n-2;e++)
            for(f=e+1;f<n-1;f++)
            for(g=f+1;g<=n-1;g++) {
                printf("\n{%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g);
                printf("\n{0,%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g); }
            if(n>=9){
            for(a=1;a<n-7;a++)
            for(b=a+1;b<n-6;b++)
            for(c=b+1;c<n-5;c++)
            for(d=c+1;d<n-4;d++)
            for(e=d+1;e<n-3;e++)
            for(f=e+1;f<n-2;f++)
            for(g=f+1;g<n-1;g++)
            for(h=g+1;h<=n-1;h++) {
                printf("\n{%d,%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g,h);
                printf("\n{0,%d,%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g,h); }
            if(n>=10){
            for(a=1;a<n-8;a++)
            for(b=a+1;b<n-7;b++)
            for(c=b+1;c<n-6;c++)
            for(d=c+1;d<n-5;d++)
            for(e=d+1;e<n-4;e++)
            for(f=e+1;f<n-3;f++)
            for(g=f+1;g<n-2;g++)
            for(h=g+1;h<n-1;h++)
            for(i=h+1;i<=n-1;i++) {
                printf("\n{%d,%d,%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g,h,i);
                printf("\n{0,%d,%d,%d,%d,%d,%d,%d,%d,%d}",a,b,c,d,e,f,g,h,i); }
        }}}}}}}*/}}
    return 0;
}