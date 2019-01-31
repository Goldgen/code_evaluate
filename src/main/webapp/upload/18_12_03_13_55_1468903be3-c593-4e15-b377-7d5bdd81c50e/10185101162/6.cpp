#include <bits/stdc++.h>
inline unsigned int dec(char const c) {
	return isdigit(c) ? c ^ 0x30 : 9 + (isupper(c) ? (c ^ 0x40) : (c ^ 0x60));
}
unsigned int hex2int(char const* const s, unsigned int len) {
	return len ? (dec(s[0]) << 4u * len - 4u) + hex2int(s + 1, len - 1u) : 0u;
}
int main() {
	char s[10]; scanf("%s", s);
	return !printf("%u\n", hex2int(s, strlen(s)));
}