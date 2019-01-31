#include <stdio.h>
#include <stdbool.h>

bool notFirst = false;
void func(int);

int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}

void func(int x)
{
    int y;
    if (x <= 0)
        return;
    scanf("%d", &y);
    func(y);
    if (notFirst)
        printf(" %d", x);
    else{
        notFirst = true;
        printf("%d", x);
    }
}
