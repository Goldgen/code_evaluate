#include<stdio.h>
int f(char *a)
{
    for(int i=0;i<8;++i)
    {
        switch(a[i])
        {
            case 'a': case'b': case  'c':  
				printf("2");
				break;
            case 'd': case 'e': case'f':  
				printf("3"); 
				break;
            case'g': case 'h': case 'i':  
				printf("4");
				break;
            case 'j': case 'k': case 'l': 
				printf("5"); 
				break;
            case 'm': case 'n': case 'o': 
				printf("6");
				break;
            case 'p': case 'q': case 'r': case  's':
				printf("7");  
				break;
            case 't': case 'u': case 'v':
				printf("8");
				break;
            case 'w': case 'x': case 'y': case 'z':
				printf("9"); 
				break;
            default: break;
        }
    }
}
int main()
{
    char a[80];
    int i=0;
    while(i<8)
    {
        a[i]=getchar();
        ++i;
    }
    f(a);
    return 0;
}
