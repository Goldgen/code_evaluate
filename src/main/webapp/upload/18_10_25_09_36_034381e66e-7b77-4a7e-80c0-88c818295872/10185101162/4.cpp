#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c(gc);
	while(!isdigit(c)) {
		c = gc;
	}
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

const char* ans[] = {
"****\n*  *\n*  *\n****",
"*****\n*   *\n*   *\n*   *\n*****",
"******\n*    *\n*    *\n*    *\n*    *\n******",
"*******\n*     *\n*     *\n*     *\n*     *\n*     *\n*******",
"********\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n********",
"*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********",
"**********\n*        *\n*        *\n*        *\n*        *\n\
*        *\n*        *\n*        *\n*        *\n**********",
};

int main() {return !printf("%s", ans[ri - 4]);}