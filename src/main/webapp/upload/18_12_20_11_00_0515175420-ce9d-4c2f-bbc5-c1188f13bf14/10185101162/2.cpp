#include <cstdio>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

unsigned long long rand(unsigned long long BASE) {
	static unsigned long long seed = 19260817uLL;
	return (seed = seed * 20001121uLL + 4321uLL) % BASE;
}

struct cmp {
	bool operator()(const char* aa, const char* bb) {
		return strcmp(aa, bb) < 0;
	}
};

template <typename T, typename VST>
T* make_axle(T* begp, T* endp, VST _CMP) {
	T* randp = begp + rand(endp - begp);
	T frog = *randp;
	*randp = *begp;
	while(true) {
		while(_CMP(frog, *(--endp))) {
			if(begp >= endp) {
				break;
			}
		}
		if(begp < endp) {
			*begp = *endp;
		} else {
			*begp = frog;
			return begp;
		}
		++begp;
		while(begp < endp && _CMP(*begp, frog)) {
			++begp;
		}
		if(begp < endp) {
			*endp = *begp;
		} else {
			*endp = frog;
			return endp;
		}
	}
}

template <typename T, typename VST>
void qsort(T* begp, T* endp, VST _CMP) {
	if(endp - begp < 2) return;
	T* ax = make_axle(begp, endp, _CMP);
	qsort(begp, ax, _CMP);
	qsort(ax + 1, endp, _CMP);
}

char** s1;
char s2[110][210];

#define gc getchar()

void read(int* pnum, int* pcnt) {
	char c(0);
	while(c != '\n') {
		++*pnum;
		scanf("%s", s1[++*pcnt]);
		int sz = strlen(s1[*pcnt]);
		for(register int j(0);j < sz;++j) if(!isalpha(s1[*pcnt][j])) {
			strcpy(s2[*pnum], s1[*pcnt]);
			--*pcnt;
			break;
		}
		c = gc;
	}
}

int main() {
	int n;
	scanf("%d", &n); gc;
	s1 = new char*[110];
	for(register int k(0);k < 110;++k) {
		s1[k] = new char[210];
	}
	for(register int i(0);i < n;++i) {
		memset(s2, 0, sizeof(s2));
		printf("case #%d:\n", i);
		int num(-1);
		int cnti(-1);
		read(&num, &cnti);
		qsort(s1, s1 + cnti + 1, cmp());
		int cntj(0);
		for(register int j(0);j < num;++j)
			if(s2[j][0] == 0) {
				printf("%s ", s1[j - cntj]);
			} else {
				printf("%s ", s2[j]);
				++cntj;
			}
		if(s2[num][0] == 0) {
			printf("%s\n", s1[num - cntj]);
		} else {
			printf("%s\n", s2[num]);
		}
	}
	return 0;
}