#include <cstdio>
#include <cstring>
using namespace std;

inline
	bool str_equal(const char* src, const char* dst, const unsigned int len) {
	for(register unsigned int i(0);i < len;++i) if(src[i] != dst[i]) {
		return false;
	}
	return true;
}

bool isrotation(const char* src, const char* dst) {
	const unsigned int sz = strlen(src);
	if(strlen(dst) != sz) return false;
	for(register unsigned int i(0);i < sz;++i) {
		if(str_equal(src + (sz - i), dst, i) && str_equal(src, dst + i, sz - i)) return true;
	}
	return false;
}

int main() {
	char src[100], dst[100];
	scanf("%s%s", src, dst);
	if(isrotation(src, dst)) {
		printf("\"%s\" is a rotation of \"%s\"\n", src, dst);
	} else {
		printf("\"%s\" is NOT a rotation of \"%s\"\n", src, dst);
	}
	
	
	return 0;
}