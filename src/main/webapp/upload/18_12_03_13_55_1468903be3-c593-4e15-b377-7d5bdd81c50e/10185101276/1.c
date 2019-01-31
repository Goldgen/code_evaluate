#include <stdio.h>
int main()
{
    char in[90];
    int out[8];
    scanf("%s",in);
    int i=0;
    for(i=0;i<8;i++){
        if((in[i]>='a'&&in[i]<='c')||(in[i]>='A'&&in[i]<='C'))out[i]=2;
        else if((in[i]>'c'&&in[i]<'g')||(in[i]>'C'&&in[i]<'G'))out[i]=3;
        else if((in[i]>'f'&&in[i]<'j')||(in[i]>'F'&&in[i]<'J'))out[i]=4;
        else if((in[i]>'i'&&in[i]<'m')||(in[i]>'I'&&in[i]<'M'))out[i]=5;
        else if((in[i]>'l'&&in[i]<'p')||(in[i]>'L'&&in[i]<'P'))out[i]=6;
        else if((in[i]>'o'&&in[i]<'t')||(in[i]>'O'&&in[i]<'T'))out[i]=7;
        else if((in[i]>'s'&&in[i]<'w')||(in[i]>'S'&&in[i]<'W'))out[i]=8;
        else if((in[i]>'v'&&in[i]<='z')||(in[i]>'V'&&in[i]<='Z'))out[i]=9;
    }
    for(i=0;i<8;i++){
        printf("%d",out[i]);
    }
    return 0;
}
