/*
 * 98. ???????????????????
 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *a[100];
int needSort[100];

int isAllLetter(const char* s) {
    while(*s) {
        if(!isalpha(*s)) {
            return 0;
        }
        s++;
    }
    return 1;
}

int Input() {
    int n;
    char c = ' ';
    char t[201];
    for(n = 0; c == ' '; ++n) {
        scanf("%s%c",t,&c);
        int len = strlen(t);
        a[n] = (char*)malloc(sizeof(char) * (len + 1));
        strcpy(a[n], t);
        needSort[n] = isAllLetter(t);
    }
    return n;
}

void Sort(int n) {
    int i, j, min_pos;
    char* t;
    for (i = 0; i < n - 1; i++) {
        if(!needSort[i]){
            continue;
        }
        min_pos = i;
        for (j = i + 1; j < n; j++) {
            if (needSort[j] && strcmp(a[j], a[min_pos]) < 0)
                min_pos = j;
        }
        if (min_pos != i) {
            t = a[min_pos];
            a[min_pos] = a[i];
            a[i] = t;
        }
    }
}

void Output(int cas, int n) {
    printf("case #%d:\n", cas);
    for(int i = 0; i < n; ++i) {
        printf("%s%c",a[i],i == n - 1 ? '\n' : ' ');
    }
}

void Free(int n) {
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
}

int main(void) {
    int T;
    scanf("%d",&T);
    getchar();
    for(int cas = 0; cas < T; ++cas) {
        int n = Input();
        Sort(n);
        Output(cas, n);
        Free(n);
    }
    return 0;
}
