#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

   struct{
    char a;
    int count;
    }character;

int main()
{
    char str[105] = "";

    character* mychar = (character*) malloc(105*sizeof(character));

    fgets(str, 105, stdin);

    int len = strlen(str);

    int i , j;
    int s = 0;
    int n = 0;


    for(i = 0; i < len; i++)
    {
        for(j = 0; j < len; j++)
        {
            if(mychar[j].a != str[i]) s++;
            if(mychar[j].a == str[i]) mychar[j].count++;
        }

        if(s == len)
        {
            mychar[n].a = str[i];
            n++;
        }

    }


    for(i = 0; i < n; i++)
    {

    printf("%c %d; ", mychar[i].a, mychar[i].count);
    }

    return 0;
}