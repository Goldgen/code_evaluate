#include <cstdio>
long long gcd(long long a, long long b) {return (!b) ? a : gcd(b, a % b);}
long long a, b;
int main() {return (scanf("%lld%lld", &a, &b), !printf("最大公约数是: %lld", gcd(a, b)));}