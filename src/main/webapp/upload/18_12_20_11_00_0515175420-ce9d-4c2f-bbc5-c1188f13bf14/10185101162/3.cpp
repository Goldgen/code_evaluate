#include <cstdio>
using namespace std;

template<typename T>
inline
	T min(T const& a, T const& b) {
	return a > b ? b : a;
}

template<typename T>
T Min(T* arr, int n) {
	if(n == 1) return arr[0];
	return min(arr[0], Min(arr + 1, n - 1));
}

template<typename T>
T Sum(T* arr, int n) {
	if(n == 1) return arr[0];
	return arr[0] + Sum(arr + 1, n - 1);
}

int main() {
	int n; int* a;
	scanf("%d", &n);
	a = new int[n];
	for(register int i(0);i < n;++i) {
		scanf("%d", a + i);
	}
	printf("%d %d\n", Min(a, n), Sum(a, n));
	
	return 0;
}