#include <stdio.h>
int main()
{
    int b;
    char a;
    b=1;
    while(getchar()!=EOF)
    {
        scanf("%c",&a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {
            printf("yes");
            b++;
            break;
        }
	 }
    if(b==1)
     printf("no");
    return 0;
}
