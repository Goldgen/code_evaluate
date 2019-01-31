#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct tm *str2tm(const char *str, struct tm *ptm)
{
    char *ptr;
    char *tok;
    char  sep[] = "-./ ";

    memset(ptm, 0, sizeof(struct tm));
    ptr = strcpy(malloc(strlen(str) + 1), str);
    tok = strtok(ptr, sep);
    ptm->tm_year = atoi(tok) - 1900;
    tok = strtok(NULL, sep);
    ptm->tm_mon = atoi(tok) - 1;
    tok = strtok(NULL, sep);
    ptm->tm_mday = atoi(tok);
    free(ptr);

    return ptm;
}

int main(int argc, char *argv[])
{
    char s1[20];
    char s2[20];
    scanf("%s %s",s1,s2);
    time_t t1, t2;
    struct tm tm1, tm2;

    t1 = mktime(str2tm(s1, &tm1));
    t2 = mktime(str2tm(s2, &tm2));
    printf("%d\n", (int)((t2 - t1) / (3600 * 24)));


    strcpy(s1, "1991-09-10");
    strcpy(s2, "1991-09-11");
    t1 = mktime(str2tm(s1, &tm1));
    t2 = mktime(str2tm(s2, &tm2));
    printf("%d\n", (int)((t2 - t1) / (3600 * 24)));

    return 0;
}