#include<stdio.h>
int main()
{
    char haoma[81];
    int shu[81];
    int i=0;
    scanf("%s",haoma);
    for(i=0;i<8;++i)
    {
        switch(haoma[i])
        {
         case 'a':case 'b':case 'c':
            shu[i]=2;
            break;
         case 'd':case 'e':case 'f':
            shu[i]=3;
            break;
         case 'g':case 'h':case 'i':
            shu[i]=4;
            break;
         case 'j':case 'k':case 'l':
            shu[i]=5;
            break;
         case 'm':case 'n':case 'o':
            shu[i]=6;
            break;
         case 'p':case 'q':case 'r':case 's':
            shu[i]=7;
            break;
         case 't':case 'u':case 'v':
            shu[i]=8;
            break;
         default:
            shu[i]=9;
        }
        printf("%d",shu[i]);
    }
    return 0;
}
