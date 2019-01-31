#include <cstdio>
#include <cctype>

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do {
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int st, ed;
bool flag = false;
bool sgn = false;

void if_sgn() {
	if(sgn) {
		if(isgraph(ed)) putchar('\n');
		flag = true;
		if(ed + 1 < 100) {
			printf("%d      %c", ed + 1, ed + 1);
		} else {
			printf("%d     %c", ed + 1, ed + 1);
		}
	}
}

void no_graph() {
	if(!flag) {
		printf("NONE");
	}
}

int main() {
	st = ri; ed = ri;
	if(!isgraph(ed)) --ed;
	if(isgraph(ed)) --ed, sgn = true;
	for(register int i(st);i < ed;++i) if(isgraph(i)) {
		flag = true;
		if(i < 100) {
			printf("%d      %c\n", i, i);
		} else {
			printf("%d     %c\n", i, i);
		}
	}
	if(isgraph(ed)) {
		flag = true;
		if(ed < 100) {
			printf("%d      %c", ed, ed);
		} else {
			printf("%d     %c", ed, ed);
		}
	}
	if_sgn();
	no_graph();
	
	return 0;
}