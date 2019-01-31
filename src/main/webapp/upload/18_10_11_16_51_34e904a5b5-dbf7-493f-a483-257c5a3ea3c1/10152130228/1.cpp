#include <stdio.h>
#include <stdlib.h>

/*小明需要你来帮助他查找ASCII码表，小明报出一个整数其范围在0-127之间，你告诉小明该整数在ASCII码表的字符信息。
请编程实现上述功能。程序输入为0-127之间的整数，输出为该整数对应的字符信息。
例如：
输入：97
输出：a*/

int main()
{
    int mes;
    scanf("%d", &mes);
    printf("%c", mes);
    return 0;
}
