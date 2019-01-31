#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** Input(int n);
void Free(char** a, int n);
void Sort(char** a, int n);

int main()
{
    char** p;
    int n;
    scanf("%d", &n);
    getchar();
    p = Input(n);
    Sort(p, n);
    for(int i = 0; i < n; i++)
        printf("%s\n", p[i]);
    Free(p, n);
    return 0;
}
char** Input(int n)
{
    char** a;
    a = calloc(n, sizeof(char*));
    for (int i = 0; i < n; ++i){
        *(a + i) = calloc(35, sizeof(char));
        gets(*(a + i));
    }
    return a;
}
void Free(char** a, int n)
{
    for (int i = 0; i < n; ++i)
        free(*(a + i));
    free(a);
}
void Sort(char** a, int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j){
            if (strcmp(*(a + j), *(a + j + 1)) > 0){
                char* temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
}

