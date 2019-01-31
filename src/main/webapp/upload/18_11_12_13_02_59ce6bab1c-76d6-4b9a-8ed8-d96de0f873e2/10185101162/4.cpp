#include <bits/stdc++.h>
int oct_to_dec(const char* s, unsigned int sz) {
	return sz ? oct_to_dec(s + 1, sz - 1) + ((s[0] ^ 0x30) << (sz - 1) * 3) : 0;
}
int main() {
	char str[50]; scanf("%s", str);
	return !printf("%d", oct_to_dec(str, strlen(str)));
}