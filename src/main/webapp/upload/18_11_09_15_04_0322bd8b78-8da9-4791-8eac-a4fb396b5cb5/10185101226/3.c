#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    here:scanf("%c",&letter);
        if(letter=='A'||letter=='a'||letter=='E'||letter=='e'||letter=='I'||letter=='i'||letter=='O'||letter=='o'||letter=='U'||letter=='u')
        {
            goto there;
        }
        else
            goto here;
    there:printf("yes");
    return 0;
}
