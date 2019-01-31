#include <cstdio>
#include <cctype>
using namespace std;

template <typename T>
class vector {
	private:
		virtual void shrink() {
			if(_cap < (_size << 2) || _cap <= MIN_items) return;
			
			T* olditems = items;
			items = new T[_cap >>= 1];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I] = olditems[__I];
			}
			
			delete[] olditems;
		}

		virtual void expand() {
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
		
		virtual ~vector() {
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
		
		bool operator==(vector<T> const& vec) const {
			if(_size != vec._size) {
				return false;
			}
			for(register int __I(0);__I < _size;++__I) if(items[__I] != vec.items[__I]) {
				return false;
			}
			return true;
		}
		
		bool operator!=(vector<T> const& vec) const {
			return !operator==(vec);
		}
		
		bool operator<(vector<T> const& vec) const {
			if(_size > vec._size) {
				return false;
			}
			for(register int __I(0);__I < _size;++__I) if(items[__I] != vec.items[__I]) {
				return items[__I] > vec.items[__I];
			}
			return false;
		}
		
		bool operator<=(vector<T> const& vec) const {
			if(_size > vec._size) {
				return false;
			}
			for(register int __I(0);__I < _size;++__I) if(items[__I] != vec.items[__I]) {
				return items[__I] > vec.items[__I];
			}
			return true;
		}
		
		bool operator>(vector<T> const& vec) const {
			return !operator<=(vec);
		}
		
		bool operator>=(vector<T> const& vec) const {
			return !operator<(vec);
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
		
		virtual int size() const {
			return _size;
		}
		
		virtual bool empty() const {
			return !_size;
		}
		
		virtual void clear() {
			_size = 0;
			delete[] items;
			items = new T[_cap = MIN_items];
		}
		
		T* begin() const {
			return items;
		}
		
		T* end() const {
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

template <typename T>
class stack : private vector<T> {
		using vector<T>::_size;
		using vector<T>::_cap;
		using vector<T>::items;
		using vector<T>::MIN_items;
		
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
		
	public:
		
		stack() {} 
		
		stack(stack const& sta) {
			_size = sta._size;
			delete[] items;
			items = new T[_cap = sta._cap];
			for(register int __I(0); __I < _size; ++__I) {
				items[__I - sta.ex_sz] = sta.items[__I];
			}
		}
		
		void push(T v) {
			items[_size++] = v;
			expand();
		}
		
		T pop() {
			T __ret = items[--_size];
			shrink();
			return __ret;
		}
		
		int size() {
			return _size;
		}
		
		bool empty() {
			return !_size;
		}
		
		void clear() {
			_size = 0;
			delete[] items;
			items = new T[_cap = MIN_items];
		}
		
		T& top() {
			return items[_size - 1];
		}
};

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register int sgn(1);
	register char c;
	do {
		c = gc;
	} while(isspace(c));
	if(c == '-') {
		sgn = -1;
		c = gc;
	}
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
	} while(isdigit(c = gc));
	return ret * sgn;
}
#define ri readint()

int main() {
	stack<int> s;
	int n;
	while((n = ri) > 0) {
		s.push(n);
	}
	printf("%d", s.pop());
	while(!s.empty()) {
		printf(" %d", s.pop());
	}
	
	return 0;
}