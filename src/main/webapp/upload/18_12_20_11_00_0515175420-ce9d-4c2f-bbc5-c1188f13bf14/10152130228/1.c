#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //char str[6][255] = {0};
    //输入6个字符串
    //printf("请输入6个字符串:\n");
    char str[100][100];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        gets(str[i]);
    }
    char temp[100] = {0};
    //对字符串进行排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    //对排好序的字符串数组进行输出
    for (int i = 0; i < n-1; i++) {
        printf("%s\n", str[i]);
    }
    printf("%s", str[n-1]);
    return 0;
}
