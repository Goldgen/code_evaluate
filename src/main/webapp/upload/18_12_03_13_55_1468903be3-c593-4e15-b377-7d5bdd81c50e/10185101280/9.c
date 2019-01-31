#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    int a = 0, j = 0, k, l, flag = -1;
    int long1, long2;
    gets(s1);
    gets(s2);
    long1 = strlen(s1);
    long2 = strlen(s2);
    while(j < long1 - long2 + 1)
    {
        k = 0, l = j;
        while(s2[k] && s1[l] == s2[k])
            {
            ++k;
            ++l;
            }
        if(s2[k] == '\0')
            {
            a++;
            if(a == 1)
                flag = j;
            }
        j++;
    }
    printf("%s: %d time(s), first at %d", s2, a, flag);
    return 0;
}