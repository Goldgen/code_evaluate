#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char group[8][5]= {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int tonum(char le)
{
    char it = toupper(le);
    char *pget = NULL;
    for(int i=0;i<8;i++){
        pget = strchr(group[i],it);

        if(pget){
           return i+2;}
    }
}
int main()
{
    char letter[81];
    gets(letter);
    for(int i=0;i<8;i++){
        
        printf("%d",tonum(letter[i]));
    }
    return 0;
}
