#include <cstdio>
//********** Specification of Input **********
char** Input(int n);
/* PreCondition: 
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/
 
//********** Specification of Free **********
void Free(char**a, int n);
/* PreCondition: 
     a points to a char* array in free store (heap), 
	 n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/
 
//********** Specification of Sort **********
void Sort(char **a, int n);
/* PreCondition: 
         a is pointer which points to an array of char* pointers,
         and n is a positive integer
   PostCondition:
         a is sorted satisfying to the specification
*/
int main() {
	char** p;
	int n,i;
	scanf("%d",&n); getchar();
//********** Input is called here **********
	p = Input(n);
//******************************************
//********** Sort is called here ***********
	Sort(p,n);
//******************************************
	for(i = 0;i < n;++i) printf("%s",p[i]); 
	Free(p,n);
//******************************************
	return 0;
}

#include <cstring>
using namespace std;

char** Input(int n) {
	char** ret_arr = new char*[n];
	for(register int i(0);i < n;++i) {
		ret_arr[i] = new char[40];
		fgets(ret_arr[i], 40, stdin);
	}
	return ret_arr;
}

unsigned long long rand(const unsigned long long BASE) {
	static unsigned long long seed = 19260817uLL;
	return (seed = seed * 20001121uLL + 4321uLL) % BASE;
}

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
		while(_CMP(*(++begp), frog)) {
			if(begp >= endp) {
				break;
			}
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

struct cmp {
	bool operator()(const char* aa, const char* bb) {
		return strcmp(aa, bb) < 0;
	}
};

void Sort(char** a, int n) {
	qsort(a, a + n, cmp());
}

void Free(char**a, int n) {
	for(register int i(0);i < n;++i) {
		delete[] a[i];
	}
	delete[] a;
}