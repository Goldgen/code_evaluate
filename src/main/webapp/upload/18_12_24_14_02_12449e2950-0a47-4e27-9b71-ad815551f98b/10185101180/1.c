#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct book
    {
        char s1[91];
        double s2;
        char s3[32];
    };
    struct book *p;
    p=(struct book*)malloc(sizeof(struct book));
    gets(p->s1);
    scanf("%lf",&p->s2);
    int a=getchar();
    gets(p->s3);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->s1,p->s2,p->s3);
    free(p);
    return 0;
}
