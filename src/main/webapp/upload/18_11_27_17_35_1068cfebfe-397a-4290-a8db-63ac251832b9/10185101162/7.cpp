#include <cstdio>
#include <cctype>
using namespace std;

template <typename T>
class vector {
	private:
		void shrink() {
			if(_cap < (_size << 2) || _cap <= MIN_items) return;
			
			T* olditems = items;
			items = new T[_cap >>= 1];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = olditems[__I];
			}
			
			delete[] olditems;
		}

		void expand() {
			if(_cap > _size) return;
			
			T* olditems = items;
			items = new T[_cap <<= 1];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = olditems[__I];
			}
			
			delete[] olditems;
		}

	protected:

		T* items;
		int _size;
		int _cap;
		static const int MIN_items = 8;

	public:

		vector() : _size(0) {
			items = new T[_cap = MIN_items];
		}
		
		vector(const T* arrt, int const& __len) {
			_size = _cap = __len;
			items = new T[_cap];
			for(register int __I(0); __I < __len; ++__I) {
				items[__I] = arrt[__I];
			}
		}
		
		vector(vector<T> const& vec) {
			_size = vec._size;
			items = new T[_cap = vec._cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = vec.items[__I];
			}
		}
		
		~vector() {
			delete[] items;
		}
		
		T& operator[](int const rank) const {
			return items[rank];
		}
		
		vector<T>& operator=(const T* arrt) {
			delete[] items;
			items = new T[_cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = arrt[__I];
			}
			return *this;
		}
		
		vector<T>& operator=(vector<T> const& vec) {
			delete[] items;
			_size = vec._size;
			items = new T[_cap = vec._cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = vec.items[__I];
			}
			return *this;
		}
		
		void push_back(T const& v) {
			items[_size++] = v;
			expand();
		}
		
		T pop_back() {
			T __ret = items[--_size];
			shrink();
			return __ret;
		}
		
		int size() const {
			return _size;
		}
		
		bool empty() const {
			return !_size;
		}
		
		void clear() {
			_size = 0;
			delete[] items;
			items = new T[_cap = MIN_items];
		}
		
		T* begin() {
			return items;
		}
		
		T* end() {
			return items + _size;
		}
		
		void swap(vector& __vct) {
			T* olditems = this->items;
			this->items = __vct.items;
			__vct.items = olditems;
			
			int old_size = this->_size;
			this->_size = __vct._size;
			__vct._size = old_size;
			
			int old_cap = this->_cap;
			this->_cap = __vct._cap;
			__vct._cap = old_cap;
		}
};

vector<int> search(vector<int> const& vec, int k) {
	vector<int> ret;
	for(register int i(0);i < vec.size();++i) if(vec[i] == k) {
		ret.push_back(i);
	}
	return ret;
}

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do{
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	vector<int> v;
	int n = ri;
	for(register int i(0);i < n;++i) {
		v.push_back(ri);
	}
	int b = ri;
	v = search(v, b);
	if(v.empty()) {
		return !printf("ERROR\n");
	}
	printf("%d", v[0]);
	for(register int i(1);i < v.size();++i) {
		printf(" %d", v[i]);
	}
	
	return !putchar('\n');
}