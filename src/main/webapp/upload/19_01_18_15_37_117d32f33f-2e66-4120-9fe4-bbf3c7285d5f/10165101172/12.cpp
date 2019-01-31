#include <iostream>
#include <cstdio>

using namespace std;


int main(void)
{
    double a,c;
    char b;
    cin>>a>>b>>c;
    switch (b) {
        case '+':
            a += c;
            break;
        case '-':
            a -= c;
            break;
        case '*':
            a *= c;
            break;
        case '/':
            a /= c;
			break;
        default:
            break;
    }
    printf("%.3lf",a);
    return 0;
}
