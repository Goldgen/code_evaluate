#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    char a;
    while (scanf("%c",&a) != EOF){
        if (a >= 65 && a <= 91)
            printf("%c",a + 32);
        else
            cout<<"ERROR";
        getchar();
    }
    return 0;
}
