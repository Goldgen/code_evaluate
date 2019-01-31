#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*（选择）Alice 与 Bob 玩剪刀石头布的游戏。请你输出游戏的结果。
【输入】
两个大写字母，以空格隔开。
第一个字母代表 Alice 的选择，第一个字母代表 Bob 的选择。
S 代表剪刀，R 代表石头，C 代表布。输入中不会出现其它字符。
【输出】
一个字符串，为胜利的玩家的名称，行末没有换行。
如果 Alice 获胜，则输出 Alice ；
如果 Bob 获胜，则输出 Bob ；
如果平局，则输出 Tie 。
【样例输入】
S R
【样例输出】
Bob*/

int main()
{
    char a, b;
    scanf("%c %c", &a, &b);
    //if(a=='S' && b=='S') printf("Tie");
    if(a=='S'){
        if(b=='S') printf("Tie");
        if(b=='R') printf("Bob");
        if(b=='C') printf("Alice");
    }
    if(a=='R'){
        if(b=='S') printf("Alice");
        if(b=='R') printf("Tie");
        if(b=='C') printf("Bob");
    }
    if(a=='C'){
        if(b=='S') printf("Bob");
        if(b=='R') printf("Alice");
        if(b=='C') printf("Tie");
    }
    return 0;
}
